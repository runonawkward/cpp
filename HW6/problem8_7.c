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
  }

  return(guess);
}

float get_discrim(a,b,c)
  float a,b,c;
{
  return ((b*b) - (4*a*c));
}
int main()
{
  float a,b,c,discrim, roota, rootb;
  int imaginary = 0;
  printf("Please enter a:\n");
  scanf("%f", &a);

  printf("Please enter b:\n");
  scanf("%f", &b);

  printf("Please enter c:\n");
  scanf("%f", &c);

  discrim = get_discrim(a,b,c);
  if (discrim < 0)
    imaginary = 1;

  roota = (-b + square_root(discrim))/(2*a);
  rootb = (-b - square_root(discrim))/(2*a);
  if (imaginary)
    printf("The roots are imaginary.\n");
  printf("%f,%f\n", roota, rootb);
  return 0;
}
