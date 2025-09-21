#include <stdio.h>
int main(){

    // Inverted pyramid (Alphabets)

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int a=0;

    for(int i=1; i<=n; i++){
        if(i>=2){
            for(int j=1; j<=i; j++){
                printf(" ");
            }
        }
        for(int k=0; k<2*n-i-a; k++ ){
            char ch = ('A' + k);
            printf("%c", ch);
        }
        a = a + 1;
        printf("\n");
    }

    return 0;
}