#include <stdio.h>
int main()
{
  int input,value,reverse = 0;
  printf("Please input an integer \n");
  scanf("%d", &input);
  if (input == 0)
  {
    printf("zero\n");
    return 0;
  }
  while (input > 0)
  {
    value = input % 10;
    reverse = reverse * 10 + value;
    input = input /10;
  }
  while (reverse > 0 )
  {
    value = reverse % 10;
    reverse = reverse /10;
    switch (value)
    {
      case 0:
        printf("zero ");
        break;
      case 1:
        printf("one ");
        break;
      case 2:
        printf("two ");
        break;
      case 3:
        printf("three ");
        break;
      case 4:
        printf("four ");
        break;
      case 5:
        printf("five ");
        break;
      case 6:
        printf("six ");
        break;
      case 7:
        printf("seven ");
        break;
      case 8:
        printf("eight ");
        break;
      case 9:
        printf("nine ");
        break;
    }
  }
  printf("\n");
  return 0;
}
