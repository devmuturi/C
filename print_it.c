/* Print_it.c - This program prints a listing with line numbers */
#include <stdlib.h>
#include <stdio.h>

void do_heading(char *filename);

int line = 0, page = 0;

int main(int argc, char *argv[])
{
  char buffer[256];
  FILE *fp;

  if (argc < 2) {
    fprintf(stderr, "\nProper Usage is: ");
    fprintf(stderr, "\nprint_it filename.ext\n");
    return 1;
  }

  if ((fp = fopen(argv[1], "r")) == NULL)
  {
    fprintf(stderr, "Error opening file: %s\n", argv[1]);
    return 1;
  }

  page = 0;
  line = 1;
  do_heading(argv[1]);

  while(fgets(buffer, 256, fp) != NULL)
  {
    if(line % 55 == 0)
      do_heading(argv[1]);

    // Output to screen. Change stdout to printer stream if needed
    fprintf(stdout, "%4d:\t%s", line++, buffer);
  }

  fprintf(stdout, "\f");
  fclose(fp);
  return 0;
}

void do_heading(char *filename)
{
  page++;

  if(page > 1)
    fprintf(stdout, "\f");

  fprintf(stdout, "Page: %d, %s\n\n", page, filename);
}
