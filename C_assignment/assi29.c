#include <stdio.h>
int main(){

    // Diamond pattern (stars)

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

 for(int i=1; i<n; i=i+1){

        for(int j=i; j<n; j++){
            printf(" ");
              
        }
          
        for(int k=1; k<=2*i-1; k++){
            printf("*");
        }
        printf("\n");
    }

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