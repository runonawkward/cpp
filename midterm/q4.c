/**
 * Title: Prose 
 * Author: William Walter
 * Date: 10/26/2016
 * Purpose: Take a string or prose and upcase the first character of each word.
 * count the number of words
 * */
#include <stdio.h>
#define IS_CHAR(x)    (((x) >= 'A' && (x) <= 'Z') || ((x) >= 'a' && (x) <= 'z') ? 1:0)
#define IS_BLANK(x)    (((x) == '\t' || (x) == '32') ? 1:0)
void cap(char prose[]);
int count(char prose[]);
int main()
{
  char prose[];
  printf("Please enter some prose. Finish entry with RETURN");
  scanf("%s", prose);
}

void cap(char prose[])
{
  int index = 0;
  char current;
  int in_word = 0;
  while( prose[index] != '\0')
  {
   
    if( IS_CHAR(prose[index]))
    {
      if(in_word == 0)
      { 
        in_word = 1;
        if (prose[index] > 'Z')
          prose[index] -= 32;
      }
      else
        ++index;
        continue;
    }
    else if( IS_BLANK(prose[index]))
    {
      in_word = 0;
    } 
    ++index;
  }
}
