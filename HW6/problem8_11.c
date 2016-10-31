#include <stdio.h>
void transpose_matrix(matrixM, matrixN)
  int matrixM[4][5];
  int matrixN[5][4];
{
  for(int i = 0; i < 4; ++i )
  {
    for( int j = 0; j < 5; ++j)
    {
      matrixN[j][i] = matrixM[i][j];
    }
  }
 return;
}

int main()
{

  int matrixM[4][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  int matrixN[5][4];
  transpose_matrix(matrixM,matrixN);
  printf("Matrix M\n");
  for( int i = 0; i < 4; ++i)
  {
    for( int j = 0; j < 5; ++j)
    {
      printf("%d ", matrixM[i][j]);
    }
    printf("\n");
  }

  printf("Matrix N\n");
  for( int i = 0; i < 5; ++i)
  {
    for( int j = 0; j < 4; ++j)
    {
      printf("%d ", matrixN[i][j]);
    }
    printf("\n");
  }
  return 0;
}

