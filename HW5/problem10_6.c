#include <stdio.h>

void remove_string(string, index, remove_index)
  char string[];
  int index;
  int remove_index;
{
  int new_index = index + remove_index;
  while (string[index] != '\0' )
  {
    string[index] = string[new_index];
    ++new_index;
    ++index;
  }
}

int main()
{
  char input[81] = "This is a test.";
  printf("Input string: %s\n", input);
  printf("Removing 4,3... is\n");
  remove_string(input, 4,3);
  printf("%s", input);
  return 0;
}
