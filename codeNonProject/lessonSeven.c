#include <stdio.h>
#include <stdint.h>

typedef struct{
  uint8_t reg1;
  uint8_t reg2;
} myConfig_t;

typedef struct{
  union{
    myConfig_t cfg;
    uint8_t data[2];
  };
} myStruct_t;

void printStruct(myStruct_t * arg){
  /* using the arrow (->) is the same as
   * (*arg).cfg.reg1
   */
  printf("reg1 = %x\n", arg->cfg.reg1);
  printf("reg2 = %x\n", arg->cfg.reg2);
}

int main(void){
  myStruct_t ex = {
    .data = {0x57, 0x71},
  };

  printStruct(&ex);
  
  ex.cfg.reg1 += 1;
  ex.cfg.reg2 += 1;

  printStruct(&ex);

  ex.data[0] = 0x99;
  ex.data[1] = 0xFF;

  printStruct(&ex);

  return 0;
}

