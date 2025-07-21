/* Demostrates prefix and postfix modes */

#include <stdio.h>

int a, b;

int main(void)
{
  a = b = 5;

  /*Print them, decrementing each time */
  printf("\nPost Pre");
  printf("\n%d      %d", a--, --b);
  printf("\n%d      %d", a--, --b);
  printf("\n%d      %d", a--, --b);
  printf("\n%d      %d", a--, --b);
  printf("\n%d      %d", a--, --b);
  printf("\n%d      %d\n", a--, --b);


  return 0;
}