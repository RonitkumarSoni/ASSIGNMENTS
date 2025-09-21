#include <stdio.h>
int main(){

    // Hollow Inverted Right-Angled Triangle (stars)

    int n; 
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        printf("*");
    }
     printf("\n");

    for(int i=1; i<n; i++){
        printf("*");
        for(int j=n-2; j>i; j--){
            printf(" ");
        }
        if(i>=1 && i<n-1){
        printf("*");
        }
        printf("\n");
    }

    return 0;
}