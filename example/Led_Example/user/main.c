#include "ioCC2540.h"


#define LED1 P1_0

int main(void){

  P1DIR |= 0x01;   //����P1_0Ϊ���
  LED1 = 0;    //����id P1_0Ϊ�͵�ƽ
  
  while(1);

}




















