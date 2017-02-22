#include <stdio.h>

int foo(int x){
  return x;
}

int main(void){
  int firstVar = foo(10);
  printf("%d\n", firstVar);

  return 0; 
}
