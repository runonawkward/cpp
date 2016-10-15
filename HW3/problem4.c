#include <stdio.h>
float factorial(int x)
{
  float value = x;
  --x;
  for (; x > 0;--x)
  {
    value = value * x;
  }
  return value;
}
int main()
{
  printf("N\tN!\n-----------\n");
  int counter = 1;
  float value = 0;
  for ( ; counter <=10; ++counter)
  {
    printf("%-2d\t%-2f\n", counter, factorial(counter));
  }
  return 0;
}
