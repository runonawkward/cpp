#include <stdio.h>
char* string_cat(char * s1, char * s2);
int string_size(char*s);
int main()
{
  char s1[80],s2[40];
  char *ans;
  while(1){
  printf("Please input a string of less than 80 characters, followed by a new line.\n>");
  fgets(&s1[0],81,stdin);
  printf("Please input a string of less than 40 characters, followed by a new line.\n>");
  fgets(&s2[0],81,stdin);
  if(s1[0] == '0')
    break;
  printf("string1: %s\nstring2: %s\n", s1, s2);
  ans = string_cat(s1,s2);
  printf("ans: %s", ans);
  }
}
char* string_cat(char * s1, char * s2)
{
  int counter = 0, size;
  char * start = s1;
  char * string2 = s2;
  size = string_size(start) + string_size(string2);
  printf("size: %d\nstring: %s\n", size, start);
  if( size > 80 )
    return NULL;

  while(*start)
  {
    //find the address of the end of string 1
    ++start;
    ++counter;
  }
  while(*string2)
  {
    *start = *string2++;
    ++start;
    ++counter;
  }
  printf("counter: %d\nstring: %s\n", counter, start);
  ++start;
   start = 0;
  printf("size: %d\n", counter);
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
