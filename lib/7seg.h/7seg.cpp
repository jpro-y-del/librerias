#include "arduino.h"
#include "_7SEG.h"
    void _7SEG_init();
        RCC->APB2ENR|=RCC_APB2ENR_IOPBEN;
        GPIOB -> CRL |= ~GPIO_CRL_CNF0 | GPIO_CRL_MODE1_0; 
        GPIOB -> CRL |= ~GPIO_CRL_CNF1 | GPIO_CRL_MODE1_0; 
        GPIOB -> CRL |= ~GPIO_CRL_CNF2 | GPIO_CRL_MODE1_0; 
        GPIOB -> CRL |= ~GPIO_CRL_CNF3 | GPIO_CRL_MODE1_0; 
        GPIOB -> CRL |= ~GPIO_CRL_CNF4 | GPIO_CRL_MODE1_0; 
        GPIOB -> CRL |= ~GPIO_CRL_CNF5 | GPIO_CRL_MODE1_0; 
        GPIOB -> CRL |= ~GPIO_CRL_CNF6 | GPIO_CRL_MODE1_0; 
        GPIOB -> CRL |= ~GPIO_CRL_CNF7 | GPIO_CRL_MODE1_0; 
    } 
    void _7SEG(int a0){     
        if(a0== 0 ){
            GPIOA -> BSRR|GPIO_BSRR_BR0|GPIO_BSRR_BS1
                         |GPIO_BSRR_BS2|GPIO_BSRR_BS3
                         |GPIO_BSRR_BS4|GPIO_BSRR_BS5
                         |GPIO_BSRR_BS6;
        }
        if(a0== 1){
            GPIOA -> BSRR|GPIO_BSRR_BR0|GPIO_BSRR_BS1
                         |GPIO_BSRR_BR2|GPIO_BSRR_BR3
                         |GPIO_BSRR_BS4|GPIO_BSRR_BS5
                         |GPIO_BSRR_BR6;
        }
        if(a0== 2){
            GPIOA -> BSRR|GPIO_BSRR_BS0|GPIO_BSRR_BR1
                         |GPIO_BSRR_BS2|GPIO_BSRR_BS3
                         |GPIO_BSRR_BR4|GPIO_BSRR_BS5
                         |GPIO_BSRR_BS6;
        }
        if(a0== 3){
            GPIOA -> BSRR|GPIO_BSRR_BS0|GPIO_BSRR_BR1
                         |GPIO_BSRR_BR2|GPIO_BSRR_BS3
                         |GPIO_BSRR_BS4|GPIO_BSRR_BS5
                         |GPIO_BSRR_BS6;
        }
        if(a0== 4){
            GPIOA -> BSRR|GPIO_BSRR_BS0|GPIO_BSRR_BS1
                         |GPIO_BSRR_BR2|GPIO_BSRR_BR3
                         |GPIO_BSRR_BS4|GPIO_BSRR_BS5
                         |GPIO_BSRR_BR6;
        }
        if(a0== 5){
            GPIOA -> BSRR|GPIO_BSRR_BS0|GPIO_BSRR_BS1
                         |GPIO_BSRR_BR2|GPIO_BSRR_BS3
                         |GPIO_BSRR_BS4|GPIO_BSRR_BR5
                         |GPIO_BSRR_BS6;
        }
        if(a0== 6){
            GPIOA -> BSRR|GPIO_BSRR_BS0|GPIO_BSRR_BS1
                         |GPIO_BSRR_BS2|GPIO_BSRR_BS3
                         |GPIO_BSRR_BS4|GPIO_BSRR_BR5
                         |GPIO_BSRR_BS6;
        }
        if(a0== 7){
            GPIOA -> BSRR|GPIO_BSRR_BR0|GPIO_BSRR_BR1
                         |GPIO_BSRR_BR2|GPIO_BSRR_BR3
                         |GPIO_BSRR_BS4|GPIO_BSRR_BS5
                         |GPIO_BSRR_BS6;
        }
        if(a0== 8){
            GPIOA -> BSRR|GPIO_BSRR_BS0|GPIO_BSRR_BS1
                         |GPIO_BSRR_BS2|GPIO_BSRR_BS3
                         |GPIO_BSRR_BS4|GPIO_BSRR_BS5
                         |GPIO_BSRR_BS6;
        }
        if(a0== 9){
            GPIOA -> BSRR|GPIO_BSRR_BS0|GPIO_BSRR_BS1
                         |GPIO_BSRR_BR2|GPIO_BSRR_BS3
                         |GPIO_BSRR_BS4|GPIO_BSRR_BS5
                         |GPIO_BSRR_BS6;
        }
    }