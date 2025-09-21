#include <stdio.h>
int main(){

    // Hollow square (Stars)

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        if(i>1 && i<n){
            printf("*");
            for(int j=2; j<n; j++){
                printf(" ");
            }
            printf("*");
        }
        if(i==1 || i==n){
        for(int k=1; k<=n; k++){
            printf("*");
        }
    }
        printf("\n");
        }
    

    return 0;
}