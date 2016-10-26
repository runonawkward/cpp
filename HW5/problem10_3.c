#include <stdio.h>
int looking_for_word = 1;
void read_line(buffer)
  char buffer[];
{
  char character;
  int i = 0;
  do {
      character = getchar();
      buffer[i] = character;
      ++i;
      }
  while ( character != '\n' );
  
  buffer[i-1] = '\0';
}

int alphabetic_numeric(c)
  char c;
{
  if ( (c >= 'a' && c <= 'z' ) || (c >= 'A' && c <='Z') || (c >= '0' && c <= '9'))
    return(1);
  else
    return(0);
}

int count_words(string)
  char string[];
{
  int i, word_count = 0;
  for ( i = 0; string[i] != '\0'; ++i )
  {
    if ( alphabetic_numeric(string[i]))
    {
      if ( looking_for_word )
      {
        ++word_count;
        looking_for_word = 0;
      }
    }
    else if ( string[i] == '\'' || string[i] == ',' || string[i] == ','\
        || string[i] == '.' )
    {
      if ( alphabetic_numeric(string[i+1]))
      {
        continue;
      }
    }
    else if ( string[i] == '-' )
    {
      continue;
    }
    else
      looking_for_word = 1;
  }
  return(word_count);
}

int main()
{
  char text[81];
  int end_of_text = 0, total_words = 0;

  printf("TYPE IN YOUR TEXT.\n");
  printf("WHEN YOU ARE DONE, PRESS 'RETURN'.\n\n");
  while ( ! end_of_text )
  {
    read_line(text);
    if ( text[0] == '\0' )
      end_of_text = 1;
    else
      total_words += count_words(text);
  }

  printf("\nThere are %d words in the above text/\n", total_words);
  return 0;
}
