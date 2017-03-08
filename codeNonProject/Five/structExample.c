#include <stdio.h>
#include <stdint.h>

typedef struct{
  uint8_t register1;
  uint8_t register2;
} peripheral_t;

int main(void){
  uint8_t x = 0x57;
  uint8_t y = 0x71;
  peripheral_t UART;
  UART.register1 = x;
  UART.register2 = y;
  printf("UART.register1 = %c\n", UART.register1);
  printf("UART.register2 = %c\n", UART.register2);
  return 0;
}
