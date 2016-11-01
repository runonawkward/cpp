#include <stdio.h>
int main()
{
  char in_name[64], out_name[64],c;
  FILE *in,*out;

  printf("please enter the name of the file to copy.\n");
  scanf("%63s", in_name);
  printf("please enter the name of the destination file.\n");
  scanf("%63s", out_name);
  if( (in = fopen(in_name,"r")) == NULL )
  {
    printf("%s could not be opened for reading.\n", in_name);
    return 1;
  }
  if((out= fopen(out_name,"w")) == NULL)
  {
    printf("%s could not be opened for writing.\n", out_name);
    fclose(in);
    return 1;
  }
  while ( (c = getc(in)) != EOF )
  {
    if (( c >= 'a' ) && ( c <= 'z'))
      c -= 32;
    putc(c, out);
  }
  fclose(in);
  fclose(out);
  return 0;
}
