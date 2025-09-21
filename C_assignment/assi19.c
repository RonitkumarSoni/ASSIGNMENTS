#include <stdio.h>
int main(){

    //Continuous Number Triangle

    int n; 
    printf("Enter number: ");
    scanf("%d",&n);

    int num = 1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ",num);
            num = num + 1;
        }
        printf("\n");
    }


    return 0;
}