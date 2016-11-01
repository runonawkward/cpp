/**
 * Title: Prose 
 * Author: William Walter
 * Date: 10/26/2016
 * Purpose: Take a string or prose and upcase the first character of each word.
 * count the number of words
 * */
#include <stdio.h>
int is_char(char c);
int is_blank(char c);
void cap(char *prose);
int count(char *prose);
int main()
{
  char input[1000] = "This is a test of my thing. ? I need to worry about.";
  printf("%s\n", input);
  cap(input);
  printf("%s\n", input);
  printf("There are %d words in the input, assuming there is no errant punctuation.\n", count(input));
}

int is_char(char c)
{
  return (((c) >= 'A' && (c) <= 'Z') || ((c) >= 'a' && (c) <= 'z') ? 1:0 );
}
int is_blank(char c)
{
  return (((c) == '\t' || (c) == ' ') ? 1:0);
}
void cap(char *prose)
{
  int in_word = 0;
  while( *prose != '\0')
  {
    if( is_char(*prose))
    {
      if(in_word == 0)
      { 
        in_word = 1;
        if (*prose > 'Z')
          *prose -= 32;
      }
      else
        ++prose;
        continue;
    }
    else if( is_blank(*prose))
    {
      in_word = 0;
    } 
    ++prose;
  }
}
int count(char *prose)
{
  int in_word = 0, count = 0;
  while ( *prose != '\0')
  {
    if( !is_blank(*prose) && !in_word)
    {
      ++count;
      in_word = 1;
    }
    if( is_blank(*prose))
      in_word = 0;
    ++prose;
  }
  return count;
}
