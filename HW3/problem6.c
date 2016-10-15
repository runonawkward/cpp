#include <stdio.h>
int main()
{
  int n, number, triangle;
  printf("What triangular number do you want?\n");
  scanf("%d", &number);
  triangle = 0;
  for ( n = 1; n <=number; ++n)
  {
    triangle = triangle +n;
  }
  printf("Triangular number %d is %d\n", number, triangle);
  printf("%-2d\t%-2d\n", number, triangle);
  return 0;
}
