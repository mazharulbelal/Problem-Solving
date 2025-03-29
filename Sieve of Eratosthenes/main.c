//
//  main.c
//  Sieve of Eratosthenes
//
//  Created by Ayat on 29/3/25.
//



#include <stdio.h>


int main(int argc, const char * argv[]) {
    int numbers[101];
    printf("Initial List\n");
    for (int i = 0; i<= 100; i++) {
        numbers[i] = i;
        printf("%d\t\t", numbers[i]);
    }
    
    printf("\n\n\nPrime Numbers\n\n\n");
    for (int i = 2; i * i <=100; i++) {
        if (numbers[i] != 0) {
            for (int j = i * i; j<=100; j = j + i) {
                    numbers[j] = 0 ;
                }
            
        }
    }
    
    for (int i = 0; i<= 100; i++) {
        if (numbers[i] > 1) {
            printf("%d\t\t", numbers[i]);
        }
    }
    
    return 0;
}
