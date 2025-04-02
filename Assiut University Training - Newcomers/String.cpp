//
//  String.cpp
//  Problem-solving
//
//  Created by Mazharul on 2/4/25.
//

#include <stdio.h>

int main() {
    char name[20] = "MazHarul";
    int count = 0;
    
    while (name[count] != '\0') {
        count++;
    }
    // Reverse String
    while (count != 0) {
     //   printf("%c", name[count - 1]);
        count --;
    }
    
    // Replace Capital Number
    while (name[count] != '\0') {
        if (((int) name[count] >= 60) && ((int) name[count] <= 90)) {
            
            char lowCase = (int)  name[count] + 32;
            name[count] = lowCase;
           
           
        }
        printf("%c", name[count]);
        count ++;
    
    }

  
}
