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
  float epsilon = .0001;
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
  printf("Put in an integer\n");
  scanf("%f",&input);
  printf("square_root (%f) = %f\n", input, square_root(input));
}

