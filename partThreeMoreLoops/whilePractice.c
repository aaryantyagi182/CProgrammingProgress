#include <stdio.h>

int main(void){
  int x = 0;
  do{
    printf("%d\n", x);
    x += 2;
  }while(x < 0);

  return 0;
}
