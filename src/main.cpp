#include <Arduino.h>
#include "dec7seg.h"
int i, b, num;
void setup(){
    _7SEG_init();
    RCC -> APB2ENR |= RCC_APB2ENR_IOPBEN;
    GPIOB-> CRL &=~ GPIO_CRL_MODE0 &~ GPIO_CRL_CNF0; 
    GPIOB -> CRL |=GPIO_CRL_MODE0_0;
}
void loop(){

    b= GPIOB->IDR&(1<<0);
    if(b==1 & num<9){
        num++;
        _7SEG(num);
        delay(300);
    }
    if (num ==9 & b==1 ){
        while (num != 0){
            b= GPIOB->IDR&(1<<0);
            if (b==1){
             num--;
            _7SEG(num);
            delay(300);   
            }
        }
    }  
}

