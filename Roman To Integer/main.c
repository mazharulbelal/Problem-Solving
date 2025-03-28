//
//  main.c
//  Roman To Integer
//
//  Created by Ayat on 28/3/25.
//



#include <stdio.h>
#include <string.h>

int charToInt(char romanNumber) {
    switch (romanNumber) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return  0;
    }

}

int main(int argc, const char * argv[]) {
    char romanNumber[15] ;
    printf("Roman Number: ");
    scanf("%s", romanNumber);
    int sum = 0;
    
    int romanNumberCount = strlen(romanNumber) ;
    int numbers[romanNumberCount] ;
    
    for (int i = 0; i<romanNumberCount; i++) {
        int currentValue = charToInt(romanNumber[i]);
        
        int nextValue = (i + 1 < romanNumberCount) ? charToInt(romanNumber[i + 1]) : 0 ;
      
        if (currentValue >= nextValue) {
            numbers[i] = currentValue;
            
        }
        else {
            numbers[i] =  -currentValue;
        }
    }
    
    for (int i = 0 ; i < strlen(romanNumber); i++) {
        printf("%d. %d\n", i, numbers[i]) ;
        sum = sum + numbers[i] ;
    }
    
    printf("SUM: %d", sum);
 
    return 0;


}
