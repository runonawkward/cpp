/**
 * Title: Shift and Transpose
 * Author: William Walter
 * Date: 10/26/2016
 * Purpose: Populate rows 2-8 of a [8][10] matrix 
 * with the values literally shifted to the right
 * of the previous row, wrapping values to the start.
 * Then transpose that matrix
 * into a [10][8] matrix
**/
#include <stdio.h>
int main()
{
  //initialize the first row of the matrix
  int matrixA[8][10] = {1,2,3,4,5,6,7,8,9,10};

  //fill the rest of the rows
  for( int i = 1; i < 8; ++i )
  {
    for (int j = 0; j < 10; ++j)
    {
      //loop through j indexes 10 1 2 3 4 5 etc.
      matrixA[i][j] = matrixA[i-1][(j+9)%10];
    }
  }

  //print the populated matrix
  for( int i = 0; i < 8; ++i )
  {
    for (int j = 0; j < 10; ++j)
    {
      printf("%d ", matrixA[i][j]);
    }
    printf("\n");
  }

  //define transpose matrix
  int matrixB[10][8];
  for ( int i = 0; i < 10; ++i)
  {
    for ( int j = 0; j < 8; ++j)
    {
      //populate and print transpose matrix
      matrixB[i][j] = matrixA[j][i];
      printf("%d ", matrixB[i][j]);
    }
    printf("\n");
  }
  return 0;
}
