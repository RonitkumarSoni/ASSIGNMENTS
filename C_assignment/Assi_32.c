#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
       printf("*");
       if(i>=2 && i<n){
        for(int j=2; j<i; j++){
            printf(" ");
        }
        printf("*");
       }
       if(i==n){
        for(int k=2; k<=n; k++){
            printf("*");
        }
       }
       printf("\n");
    }


    return 0;
}