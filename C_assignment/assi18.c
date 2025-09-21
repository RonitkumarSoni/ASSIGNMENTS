#include <stdio.h>
int main(){

    // Inverted Right Angled Triangle (Alphabets)

    int n; 
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=0; j<n+1-i; j++){
            char ch = ('A' + j);
            printf("%c ",ch);
        }
        printf("\n");
    }

    return 0; 
}