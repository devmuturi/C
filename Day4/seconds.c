/* Illustrates the modulus operator */
/* Inputs a  number of seconds and conversts to hours */
/* minutes and seconds */

#include <stdio.h>

/* Define constants */

#define SECONDS_IN_MINUTE 60
#define SECONDS_IN_HOUR 3600

unsigned seconds, minutes, hours, secs_left, mins_left;

int main(void) {
  /* Input the number of seconds */

  printf("Enter the number of seconds: ");
  scanf("%u", &seconds);

  /* Calculate hours, minutes and seconds */
  hours = seconds / SECONDS_IN_HOUR;
  secs_left = seconds % SECONDS_IN_HOUR;
  minutes = secs_left / SECONDS_IN_MINUTE;
  mins_left = secs_left % SECONDS_IN_MINUTE;

  /* Output the result */
  printf("%u seconds is %u hours, %u minutes and %u seconds\n", seconds, hours, minutes, mins_left);
  return 0;
}