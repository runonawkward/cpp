#include <stdio.h>
int main()
{
  int i,j;
  
  // populate with 0s
  int primes[151] = {0};
  for ( i = 2; i <= 150; ++i )
  {
    if (primes[i] == 0)
      printf("%d\n", i);

    j = i + 1; 
    while ((i*j) <= 150)
    {
      primes[i*j] = 1;
      ++j;
    }

  }
}
