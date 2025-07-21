/* Demostrates the use of if statements */

#include <stdio.h>

int x, y;

int main(void) {
  /* Input the two values */
  printf("Enter two integers: ");
  scanf("%d %d", &x, &y);

  /* Compare the two values */
  if (x == y) {
    printf("The two values are equal.\n");
  } else if (x > y) {
    printf("%d is greater than %d.\n", x, y);
  } else {
    printf("%d is less than %d.\n", x, y);
  }

  return 0;
}