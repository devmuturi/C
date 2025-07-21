/* Program to tell the size of the C variable */
#include <stdio.h>

int main(void)
{
  printf("\nA char is %d bytes", sizeof(char));
  printf("\nAn int is %d bytes", sizeof(int));
  printf("\nA short is %d bytes", sizeof(short));
  printf("\nA long long is %d bytes", sizeof(long long));
  printf("\nA long long int is %d bytes", sizeof(long long int));
  printf("\nAn unsigned char is %d bytes", sizeof(unsigned char));
  printf("\nA long is %d bytes", sizeof(long));
  printf("\nA float is %d bytes", sizeof(float));
  printf("\nA double is %d bytes", sizeof(double));
  printf("\nA pointer is %d bytes\n", sizeof(void *));
  return 0;
}