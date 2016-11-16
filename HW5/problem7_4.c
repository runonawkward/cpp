#include <stdio.h>

int main()
{
  int rating_counters[11];
  for ( int j = 0; j < 11; ++j )
    rating_counters[j] = 0;
  int i, response;
  for (i = 1; i <= 1000; ++i )
  {
    printf("Please enter your response, 1-10. Enter 999 to end submission\n");
    scanf("%d", &response);
    if (response == 999)
    {
      printf("999 received ending submission\n");
      break;
    }
    ++rating_counters[response];
  }
  printf("Rating\t Value\n----------------\n");
  for (i = 1; i < 11; ++i )
  {
    printf("%-2d\t%-2d\n", i, rating_counters[i]);
  }
}
