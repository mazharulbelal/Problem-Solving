//
//  main.c
//  Even Or Odd
//
//  Created by Ayat on 31/3/25.
//

#include <stdio.h>

int main() {
    unsigned short int input;
    scanf("%hu",&input);
    if (input == 2) {
        printf("NO");
        return 0 ;
    }
    printf(input % 2 == 0 ? "YES": "NO");
}
