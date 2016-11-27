#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[])
{
  int size;
  char * printer; 
  for( int i =0; i < argc; ++i)
  {
    printf("%s\n", argv[i]);
  }
  if(argc != 4)
  {
    printf("Usage:\nArray type size value1 value2 value2...\n");
    return 1;
  }
  sscanf(argv[2],"%d",&size); 
  if (strcmp(argv[1], "float") == 0)
  {
    float * arr = malloc(size * sizeof(float));
    float val;
    sscanf(argv[3],"%f",&val);
    for(int i = 0; i < size; ++i)
    {
      arr[i] = val;
    }
    for(int i = 0; i < size; ++i)
    {
      printf("%f ", arr[i]);
      if ( i >0 && i % 8 == 0)
        printf("\n");
    } 
    free(arr);
  }
  else if (strcmp(argv[1], "int") == 0)
  {
    int *arr = malloc(size * sizeof(int));
    int val;
    sscanf(argv[3],"%d",&val);
    for(int i = 0; i < size; ++i)
    {
      arr[i] = val;
    }
    for(int i = 0; i < size; ++i)
    {
      printf("%d ", arr[i]);
      if ( i >0 && i % 8 == 0)
        printf("\n");
    } 
    free(arr);
  }
  else if (strcmp(argv[1],"char") == 0)
  {
    char * arr = malloc(size * sizeof(char));
    int val;
    sscanf(argv[3],"%d",&val);
    for(int i = 0; i < size; ++i)
    {
      arr[i] = val;
    }
    for(int i = 0; i < size; ++i)
    {
      printf("%c ", arr[i]);
      if ( i >0 && i % 8 == 0)
        printf("\n");
    } 
    free(arr);
  }
  else if (strcmp(argv[1],"double") == 0)
  {
    double * arr = malloc(size * sizeof(double));
    double val;
    sscanf(argv[3],"%lf",&val);
    for(int i = 0; i < size; ++i)
    {
      arr[i] = val;
    }
    for(int i = 0; i < size; ++i)
    {
      printf("%lf ", arr[i]);
      if ( i >0 && i % 8 == 0)
        printf("\n");
    } 
    free(arr);
  }
  else {
    printf("Unsupported Array type: %s\n", argv[1]);
    return 1;
  }
}
