#include <stdio.h>
int main()
{
  int first,second;
  printf("Please input an integer.\n");
  scanf("%d", &first);
  printf("Please input another integer.\n");
  scanf("%d", &second);
  if ((first > second) && (second > 0))
  {
    if (first % second == 0)
      printf("%d is evenly divisible by %d\n", first, second);
    else
      printf("%d is not evenly divisible by %d\n", first, second);
  }
  else
    printf("%d is not evenly divisible by %d\n", first, second);

  return 0;
}
