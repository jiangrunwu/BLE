#include "ioCC2540.h"


#define LED1 P1_0

int main(void){

  P1DIR |= 0x01;   //配置P1_0为输出
  LED1 = 0;    //配置id P1_0为低电平
  
  while(1);

}




















