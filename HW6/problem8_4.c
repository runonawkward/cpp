#include <stdio.h>

float absolute_value(x)
  float x;
{
  if (x < 0)
    x = -x;

  return x;
}

float square_root(x)
  float x;
{
  float epsilon = .00001;
  float guess = 1.0;

  while( absolute_value( guess * guess - x) >= epsilon)
  {
    guess = (x / guess + guess ) / 2.0;
    printf("%f\n", guess);
  }

  return(guess);
}

main()
{
  float input;
  scanf("%f",&input);
  printf("square_root (2.0) = %f\n", square_root(2.0));
  printf("square_root (144.0) = %f\n", square_root(144.0));
  printf("square_root (17.5) = %f\n", square_root(17.5));
  printf("square_root (200) = %f\n", square_root(200));
//  printf("square_root (250) = %f\n", square_root(250));
  printf("square_root (%f) = %f\n", input, square_root(input));
}

