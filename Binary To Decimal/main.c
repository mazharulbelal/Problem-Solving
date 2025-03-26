
#include <stdio.h>

int countDigit(int numbers) {
    int count = 0;
    while (numbers != 0) {
        numbers = numbers / 10 ;
        count = count + 1;
    }
    return count;
}

int tenPowerBase(int power, int base){
    int result = 1;
    for (int i = 0 ; i < power; i++) {
        result = result * base ;
       
    }
    return result;
}

int main(int argc, const char * argv[]) {
    int binaryNumber;
    int decimalNumbers[32];
    
    printf("Binary Number: ");
    scanf("%d", &binaryNumber);

    int sum = 0;
    
    for( int i = 0; i < countDigit(binaryNumber); i++) {
        int lastDigitNumber = (binaryNumber / tenPowerBase(i, 10)) % 10 ;
        decimalNumbers[i] = lastDigitNumber ;
        int power = lastDigitNumber * tenPowerBase(i, 2);
        sum = sum + power ;
    }
    printf("%d",sum);
    
    return 0;
}
