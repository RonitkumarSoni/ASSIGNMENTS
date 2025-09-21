#include <stdio.h>
int main(){

    //Border Rectangle (Numbers)

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        if(i==1 || i==n){
            for(int j=1; j<2*n; j++){
                printf("%d",j);
            }
        }
        if(i>=2 && i<n){
            printf("1");

            for(int k=1; k<2*n-2; k++){
                printf(" ");
            }
            printf("%d",2*n-1);
        }
        printf("\n");
    }

    return 0;
}