//
//  main.c
//  Integer To Roman
//
//  Created by Ayat on 29/3/25.
//

#include <stdio.h>
#include "math.h"

int main(int argc, const char * argv[]) {
    unsigned short int number ;
    printf("Number: ");
    scanf("%hu", &number);
    
    int digitCount = number == 0 ? 1 : 0 ;
    unsigned short int temp = number;
    while (temp > 0) {
        temp = temp / 10;
        digitCount ++ ;
        
    }
    
    int numberList[digitCount];
    for (int i = 0; i < digitCount; i++) {
        int singleNumber = (int)(number / pow(10, i)) % 10 ;
        numberList[digitCount - 1 - i ] = singleNumber * (int) pow(10, i) ;
       
    }
    
    
    for (int i = 0; i< digitCount; i++) {
        printf("\n%d", numberList[i]);
    }
    
   
    return 0;
}
