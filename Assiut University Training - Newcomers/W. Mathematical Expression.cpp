#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n -1;
    
    for (int i = 1; i<=n; i++) {
        
        for (int i = space; i >=1; i--) {
            printf(" ");
        }
        
        for (int j = 1; j <=star;  j++) {
            printf("*");
        }
        printf("\n");
        star+= 2;
        space--;
       
    }
    
   
    for (int i = 1; i<=n; i++) {
        
        for (int j = 0; j <=space; j++) {
            printf(" ");
        }
        
      
        for (int j = star -3; j >=0 ;  j--) {
            printf("*");
        }
        
    
        printf("\n");
        star-= 2;
        space++;
       
    }
    
    return 0;
}
