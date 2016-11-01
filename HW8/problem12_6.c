#include <stdio.h>
int get_size(void);
int bitpat_search(unsigned int source, unsigned int pattern, int n);

int main()
{
  unsigned int source = 0xe1f4, pattern = 0x5;
  const int SIZE = get_size();
  int n = 3;
  printf("Pattern: %.8x found at bit index %d in %d bit unsigned integer %.8x\n", pattern, bitpat_search(source, pattern, n), SIZE, source);
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
int bitpat_search(unsigned int source, unsigned int pattern, int n)
{
  const int SIZE = get_size();
  int counter = 0, result;
  // 1 ^ 1 = 0
  // 1 ^ 0 = 1
  // 0 ^ 0 = 0

  unsigned int shift_source, shift_pattern;
  //shift the N left most bits in source into the right N bits
  for(;counter < SIZE - n; ++counter)
  {
    shift_source = source >> (SIZE - n);
    result = shift_source ^ pattern;
    if ( result == 0 )
    {
      break;
    }
    source <<= 1;
  }
  return counter;
}
