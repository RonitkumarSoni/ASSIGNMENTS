#include<stdio.h>
int main () {
    int n;
    printf("Enter a value :");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        printf("%c", 'A' + (i - 1));
        if(i < n) {
            printf(" ");
    }
    }
    printf("\n");
    return 0;

}