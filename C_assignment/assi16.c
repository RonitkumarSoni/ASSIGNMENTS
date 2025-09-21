#include <stdio.h>
int main(){

    // Inverted Right Angled Triangle (Stars)

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}