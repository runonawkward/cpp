#include <stdio.h>
int main()
{
  int a = 47;
  printf("%d - hex: %x\n",a, a);
  a = a & 0xFFFFFF0;
  printf("%d - hex: %x\n",a, a);
  a = a & 0xFFFFF32;
  printf("%d - hex: %x\n",a, a);
  unsigned int k = ~0x0070;
  printf("k = %x\n", k);
}
