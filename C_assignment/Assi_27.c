#include <stdio.h>
int main(){
    int n; 
    printf("Enter the number: ");
    scanf("%d",&n);

    int a = 0;

    for(int i=1; i<=n; i++){
        if(i>=2){
            for(int j=2; j<=i; j++){
                printf(" ");
            }
        }
        for(int k=1; k<=2*n-i-a; k++){
            printf("%d",k);
        }
        a = a + 1;
        printf("\n");
    }

    return 0;
}