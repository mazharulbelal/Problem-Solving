//
//  main.c
//  BinaryToDecimal
//
//  Created by Ayat on 26/3/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int decimalNumber;
    int binaryNumbers[32];
    int count = 0;
    
    printf("Binary Digit:");
    scanf("%d", &decimalNumber);
    
    if (decimalNumber == 0) {
        return 0;
    }
    
    while (decimalNumber != 0) {
        int reminder = decimalNumber % 2;
        binaryNumbers[count] = reminder;
        decimalNumber = decimalNumber / 2;
        count ++;
        
        
    }
    
    printf("Binary Numbers:");
    for(int i = count - 1; i >=0 ; i--) {
        printf("%d", binaryNumbers[i]);
    }
    
    
    printf("\n");
    
    return 0;
}
