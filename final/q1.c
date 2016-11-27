#include <stdio.h>
char* string_cat(char * s1, char * s2);
int string_size(char*s);
int main()
{
  char s1[80],s2[40];
  char *ans;
  printf("Input 0 to quit.\n");
  while(1){
  printf("Please input a string characters, followed by a new line.\n>");
  fgets(&s1[0],81,stdin);
  if(s1[0] == '0')
    break;
  printf("Please input a string of less than 39 characters, followed by a new line.\n>");
  fgets(&s2[0],41,stdin);
  if(s2[0] == '0')
    break;
  printf("string1: %sstring2: %sinput size: %d\n", s1, s2, string_size(s1) + string_size(s2));
  ans = string_cat(s1,s2);
  printf("ans: %s\n", ans);
  }
}
char* string_cat(char * s1, char * s2)
{
  int counter = 0, size;
  char * start = s1;
  char * string2 = s2;
  size = string_size(start) + string_size(string2);
  if( size > 80 )
    return NULL;

  while(*start != '\n')
  {
    //find the address of the end of string 1
    ++start;
    ++counter;
  }
  while(*string2 != '\n')
  {
    
    *start = *string2++;
    ++start;
    ++counter;
  }
  *start = '\0';
  // This will be max 78 cause of the stripped new line chars
  printf("output size: %d\n", counter);
  return s1;
}
int string_size(char*s)
{
  int counter = 0;
  while(*s)
  {
    ++counter;
    ++s;
  }
  return counter;
}
