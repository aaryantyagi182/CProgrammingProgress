#include <stdio.h>

typedef enum{
  myVar1,
  myVar2,
  myVar3
} var_t;

void findVar(void){
  for(var_t x = myVar1; x < myVar3 + 1; x++){
    if(x == myVar2){
      printf("%d\n", x);
    }
  }
}

int main(void){
  findVar();
  return 0;
}
