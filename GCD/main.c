//
//  main.c
//  GCD
//
//  Created by Ayat on 29/3/25.
//

#include <stdio.h>
#include <stdlib.h>

int getGCD(int number1, int number2) {
    while (number2 != 0) {
        int temp = number2;
        number2 = number1 % number2;
        number1 = temp;
    }
    return  abs(number1);
}

int main(int argc, const char * argv[]) {
    int number1, number2;
    printf("Number 1: ");
    scanf("%d", &number1);
    printf("Number 2: ");
    scanf("%d", &number2);
    
    printf("*****************\n");
    int gcdNumber = getGCD(number1, number2);
    printf("GCD: %d\n", gcdNumber);
    
    int lcm = (number1 * number2) / gcdNumber ;
    printf("LCM: %d\n", lcm);
   
    return 0;
}
