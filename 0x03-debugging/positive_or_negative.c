#include <stdio.h>
#include "main.h"

void positive_or_negative(int i){
        if (i > 0){
                printf("%i is positive",i);
        }
        else if(i < 0){
                printf("%i is negative",i);
        }else{
                printf("%i is zero",i);
        }
}

