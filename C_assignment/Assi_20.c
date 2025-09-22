#include <stdio.h>
int main(){
    int n; 
    printf("Enter number: ");
    scanf("%d",&n);

    int num = 65;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            char ch = (char)num;
            printf("%c ",ch);
            num = num + 1;
        }
        printf("\n");
    }


    return 0;
}