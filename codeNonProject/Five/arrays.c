#include <stdio.h>

int main(void){
  int n = 15;
  char str[15];
  for(int i = 0; i < n; i++){
    str[i] = i + 41;
  }
  for(int y = 0; y <n; y++){
    //see ASCII table on wikipedia for other  characters
    printf("Element %d: %c\n", y, str[y]);
  }
  return 0;
}
