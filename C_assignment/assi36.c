#include <stdio.h>
int main(){

    //Left-Aligned Triangle (Alphabets)

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            printf(" ");
        }
        for(int k=0; k<i; k++){
            char ch = ('A' + k);
            printf("%c",ch);
        }
        printf("\n");
    }

    return 0;
}