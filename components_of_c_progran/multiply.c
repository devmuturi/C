// Program to claculate the product of two numbers.
#include <stdio.h>

int val1, val2, product;

int product_of_two_numbers(int x, int y);

int main(void)
{
  /* Get the first number */
  printf("Enter a number between 1 and 100: ");
  scanf("%d", &val1);

  /* Get the second number */
  printf("Enter another number between 1 and 100: ");
  scanf("%d", &val2);

  /* Calculate the product */
  product = product_of_two_numbers(val1, val2);
  printf("The product of %d and %d is %d\n", val1, val2, product);
  return 0;
}

/* Function to calculate the product of two numbers */
int product_of_two_numbers(int x, int y)
{
  return x * y;
}