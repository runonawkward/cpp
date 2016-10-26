// #define NDEF
#include <stdio.h>
int main()
{
#ifdef NDEF
#define N 64
#endif
  int N = 15;
  printf("%d", N);
  return 0;
}
