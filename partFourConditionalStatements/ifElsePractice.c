#include <stdio.h>

void parseArgs(int x){
  if(x){
    if(x < 5){
      printf("something\n");
    } else if(x > 5 && x < 10){
      printf("I dunno\n");
    }
    else {
      printf("x < 0\n");
    }
  }
}

int main(void){
  for(int x = -5; x < 20; x++){
    parseArgs(x);
  }
  return 0;
}
