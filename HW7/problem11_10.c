#include <stdio.h>
int compare_strings(char *stringy,char *chewey);
int main()
{
  char *stringA = "a";
  char *stringB = "a";
  char *stringC= "lala";
  char *stringD = "aaa";
  printf("%s == %s? Answer: %d\n", \
      stringA, stringB, compare_strings(stringA, stringB));
  printf("%s == %s? Answer: %d\n", \
      stringA, stringC, compare_strings(stringA, stringC));
  printf("%s == %s? Answer: %d\n", \
      stringC, stringD, compare_strings(stringC, stringD));
}

int compare_strings(char *stringy,char *chewey)
{
  char *value1 = stringy,*value2 = chewey;
  int i = 0, answer;
  char a = *(value1+ i), b = *(value2 + i);
  if (a < b)
    answer = -1;
  if (a > b)
    answer = 1;
  while( a == b \
      && ( ((a != '\0' ) && (b != '\0') ) ) )
  {
    ++i;
    a = *(value1 + i);
    b = *(value2 + i);
    if (a < b)
      answer = -1;
    else if (a == b)
      answer = 0;
    else
      answer = 1;
  }
  return answer;

}
