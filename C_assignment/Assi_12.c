#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {                    
        for (int j = 1; j <= 65+n; j++) {    
           if (i+j<65){
            printf("%c",j);
           }
           else{
            printf(" ");
           }
        }
        
        printf("\n");
    }

    return 0;
}
