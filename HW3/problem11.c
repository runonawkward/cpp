#include <stdio.h>
int main()
{
  int input,sum = 0;
  printf("Please input an integer>");
  scanf("%d", &input);
  while ( input > 0 )
  {
    sum = sum + input % 10;
    input = input /10;
  }
  printf("The sum of the digits of the integer is %d\n", sum);
  return 0;
}

