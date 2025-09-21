#include <stdio.h>
int main(){

// Inverted Pyramid (stars)

    int n; 
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        if(i>=2){
            for(int j=1; j<i; j++){
                printf(" ");
            }
        }
        for(int k=i; k<=2*n-i; k++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}