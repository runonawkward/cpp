#include <stdio.h>
int main()
{
  int first, second;
  printf("Please input an integer\n");
  scanf("%d", &first);
  printf("Please input another integer\n");
  scanf("%d", &second);
  if (second > 0)
    printf("%d divided by %d equals %.3f\n", first, second, (float)first/second);

  return 0;
}
