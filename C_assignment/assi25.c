#include <stdio.h>
int main(){

    // Palindrome triangle (Alphabets)

    int n; 
    printf("Enter the nubmer: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            char ch1 = ('A' + j);
            printf("%c",ch1);
        }
        if(i>=2){
            for(int k=i-2; k>=0; k--){
                char ch2 = ('A' + k);
                printf("%c",ch2);
            }
        }
        printf("\n");
    }


    return 0;
}