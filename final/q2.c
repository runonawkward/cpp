#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void alpha_sort(char ** array_ptr, int size);
int main()
{
  char buffer[80];
  char * line_array[40];
  char * temp;
  int num_lines = 0, len;
  printf("Enter up to 40 lines of text. End with a line starting with #\n");
  while(1)
  {
    fgets(&buffer[0], 80, stdin);
    if(buffer[0] == '#')
      break;
    len = strlen(buffer);
    line_array[num_lines] = malloc(len * sizeof(char));
    strcpy(line_array[num_lines], buffer);
    ++num_lines;
    if(num_lines >= 40)
      break;
  }
  for(int i = 0; i < num_lines; ++i){
    printf("%s", line_array[i]);
  }
  printf("----------------------\n");
  for(int i = 0; i < num_lines; ++i){
    switch(i){
      case 4:
        temp = line_array[i];
        line_array[i] = line_array[num_lines-2];
        line_array[num_lines-2] = temp;
        break;
      case 5:
        temp = line_array[i];
        line_array[i] = line_array[num_lines-1];
        line_array[num_lines-1] = temp;
        break;
    }
    printf("%s", line_array[i]);
  }
  printf("----------------------\n");
  alpha_sort(line_array, num_lines);
  for(int i = 0; i < num_lines; ++i)
  {
    printf("%s", line_array[i]);
  }
}

void alpha_sort(char ** array_ptr, int size )
{
  char * temp_str;
  int swapped = 0, comp;
  for ( int i = 1; i < size; ++i )
  {
    comp = strcmp(*(array_ptr +(i-1)), *(array_ptr+i));
    if( comp > 0 ){
      temp_str = *(array_ptr+ (i-1));
      *(array_ptr+ (i-1)) = *(array_ptr + i);
      *(array_ptr+i) = temp_str;
      swapped = 1;
    }
  }
  if( swapped)
   alpha_sort(array_ptr, size);
}

