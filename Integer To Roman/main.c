//
//  main.c
//  Integer To Roman
//
//  Created by Ayat on 29/3/25.
//

#include <stdio.h>
#include "math.h"

const char* getRoman(int num) {
    switch (num) {
        case 1000: return "M";
        case 900: return "CM";
        case 500: return "D";
        case 400: return "CD";
        case 100: return "C";
        case 90: return "XC";
        case 50: return "L";
        case 40: return "XL";
        case 10: return "X";
        case 9: return "IX";
        case 5: return "V";
        case 4: return "IV";
        case 1: return "I";
        default: return "Invalid input";
    }
}


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
        printf("%s", getRoman(numberList[i]));

    }
    
   
    return 0;
}
