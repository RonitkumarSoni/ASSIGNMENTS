#include <stdio.h>
int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
     
    int a=1;

    for(int i=1; i<=n; i++){
        if(i==1){
            for(int j=1; j<2*n; j++){
                printf("*");
            }
        }
        if(i>=2 && i<n){
            for(int k=1; k<i; k++){
                printf(" ");
            }
            printf("*");

            for(int l=a; l<2*n-4; l++){
                printf(" ");
            }
            a = a + 2;

            printf("*");
        }
        if(i==n){
            for(int m=1; m<n; m++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");

    }
    

    return 0;
}