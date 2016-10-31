#include <stdio.h>
#define MAX(a,b)    ( (a) > (b) ? (a):(b))
#define MAX3(a,b,c)     (MAX(MAX(a,b),c))

int main()
{
  printf("Max of 4,15,6: %d\n", MAX3(4,(10 + 5),6));
}
