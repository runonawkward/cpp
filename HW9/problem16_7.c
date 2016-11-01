
#include <stdio.h>
int main()
{
  char in_name1[64],in_name2[64], c1,c2;
  FILE *in1,*in2;

  printf("please enter the name of the first input file.\n");
  scanf("%63s", in_name1);
  printf("please enter the name of the second input file.\n");
  scanf("%63s", in_name2);
  if( (in1= fopen(in_name1,"r")) == NULL )
  {
    printf("%s could not be opened for reading.\n", in_name1);
    return 1;
  }
  if((in2 = fopen(in_name2,"r")) == NULL)
  {
    printf("%s could not be opened for reading.\n", in_name2);
    fclose(in1);
    return 1;
  }
  do {
    while( (c1 = getc(in1)) != '\n' && c1 != EOF)
    {
     putc(c1,stdout); 
    }
    putc('\n', stdout);
    while( (c2 = getc(in2)) != '\n' && c2 != EOF)
    { 
     putc(c2,stdout); 
    }
    putc('\n', stdout);
  } while ( c1 != EOF && c2 != EOF);
  if (c1 == EOF && c2 != EOF)
  {
    while( (c2 = getc(in2)) != EOF)
    {
     putc(c2,stdout); 
    }
  }
  else if (c1 != EOF && c2 == EOF)
  {
    while( (c1 = getc(in1)) != EOF)
    {
     putc(c1,stdout); 
    }
  }
  fclose(in1);
  fclose(in2);
  return 0;
}
