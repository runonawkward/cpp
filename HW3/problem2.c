#include <stdio.h>
int main()
{
  int n = 1;
  printf("n\tn^2\n------------\n");
  for (; n <= 10; n++)
  {
    printf("%-2d\t%-2d\n", n, n*n);
  }
  return 0;
}
