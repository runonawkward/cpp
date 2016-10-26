#include <stdio.h>
#define IS_UPPER_CASE(a)    ( ((a) >= 'A' && (a) <= 'Z') ? 1:0)

int main()
{
  if (IS_UPPER_CASE('A'))
    printf("A is upper case");
  else
    printf("The macro failed");
  if (IS_UPPER_CASE('Z'))
    printf("Z is upper case");
  else
    printf("The macro failed");
  if (IS_UPPER_CASE('$'))
    printf("The macro failed");
  else
    printf("$ is not upper case");
}
