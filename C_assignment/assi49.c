#include <stdio.h>
int main(){

    // Continous Alphabet (Square)

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int a = 65;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%c ",a);
            a = a + 1;
        }
        printf("\n");
    }

    return 0;
}