#include <stdio.h>
#define SHIFT(value, n)     ( (n) > 0 ? ((value) << (n)): ((value) >> -(n)))

int main(){
  printf("SHIFT 6,2 should be 24: %d",SHIFT(6,2));
}

