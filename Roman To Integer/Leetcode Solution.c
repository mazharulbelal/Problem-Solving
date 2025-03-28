//
//  Leetcode Solution.c
//  Roman To Integer
//
//  Created by Ayat on 28/3/25.

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

int romanToInt(char* s) {
    int total = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        int current = charToInt(s[i]);
        int next = charToInt(s[i + 1]);

        if (current < next) {
            total -= current;
        } else {
            total += current;
        }
    }

    return total;


}
