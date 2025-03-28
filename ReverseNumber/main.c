//
//  main.c
//  ReverseNumber
//
//  Created by Ayat on 27/3/25.
//

#include <stdio.h>

int main() {
    int x = 1234567890 ;
    int number = 0;
    while(x != 0) {
        number =  (number * 10) + (x % 10) ;
        x = x / 10;
    }
    printf("%d", number);
    return 0;
}
