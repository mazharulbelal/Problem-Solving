//
//  main.c
//  Prime Number Check
//
//  Created by Ayat on 27/3/25.
//

#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int main(int argc, const char * argv[]) {
    int number;
    printf("Number: ");
    scanf("%d", &number);
    int squereRootNumber = sqrt((double)number);
    bool isPrimeNumber = true;
    
    
    if (number <=1 ) {
        printf("%d is Not Prime\n", number);
        return 0;
    }
    for (int i = 2; i<=squereRootNumber; i++) {
        if (number % i == 0) {
            isPrimeNumber = false ;
            break;
        }
    }
    printf("%d is %s",number, isPrimeNumber ? "Prime": "Not Prime");
    return 0;
}
