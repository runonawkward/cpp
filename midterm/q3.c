/**
 * Title: Fib Sum
 * Author: William Walter
 * Date: 10/26/2016
 * Purpose: Calculate the sum of the first fibonnaci numbers**/
#include <stdio.h>
int fib(int n);
void fibonnaci(int fibs[],int size);
int sum(int fibs[], int size);
int main()
{
  int fibs[21];
  int size = 21; 
  fibonnaci(fibs,size);
  printf("Fibonnaci Numbers\nN\tValue\n-------------\n");
  for (int i = 0; i < size; ++i)
    printf("%-2d\t%d\n", i, fibs[i]);
  int total = sum(fibs,size);
  printf("The sum of the first 10 fibonnaci numbers is: %d\n", total);
}
int fib(n)
{
  if (n >= 2)
    return fib(n-1) + fib(n-2);
  else if (n == 1)
    return 1;
  else
    return 0;
}
void fibonnaci(int fibs[],int size)
{
  for(int i = 0; i < size; ++i)
  {
    fibs[i] = fib(i);
  }
}
int sum(int fibs[], int size)
{
  int sum = 0;
  for(int i = 0; i < size; ++i)
  {
    sum += fibs[i];
  }
  return sum;
}
