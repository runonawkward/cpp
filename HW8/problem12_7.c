#include <stdio.h>

int get_size(void);
unsigned int bitpat_get(unsigned int source, int start_point, int end_point);
int main()
{
  unsigned int pattern = 0xe1f4;
  int start_point = 17, end_point = 4;
  unsigned int answer = bitpat_get(pattern, start_point, end_point);
  printf("Bits %d to %d of unsigned int %.32x are %.32x\n", start_point, start_point + end_point, pattern, answer);
  return 0;
}
int get_size(void)
{
  int size = 0;
  unsigned int sizer = ~0;
  while( sizer > 0 )
  {
    ++size;
    sizer >>= 1;
  }
  return size;
}

unsigned int bitpat_get(unsigned int source, int start_point, int end_point)
{
  const int SIZE = get_size();
  source <<= start_point -1;
  source >>= SIZE - end_point;
  return source;
}
