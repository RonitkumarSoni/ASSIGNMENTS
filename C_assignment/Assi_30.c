#include <stdio.h>
int main(){
   int n;
   printf("Enter the number: ");
   scanf("%d",&n);

   for(int i=1; i<=n; i++){
    for(int j=i; j<n; j++){
        printf(" ");
    }
    for(int k=0; k<i; k++){
        char ch = ('A' + k);
        printf("%c",ch);
    }
    if(i>=2){
        for(int l=i-2; l>=0; l--){
            char ch1 = ('A' + l);
            printf("%c",ch1);
        }
    }
    printf("\n");
   }

   for(int i=1; i<n; i++){
    for(int j=1; j<=i; j++){
        printf(" ");
    }
    for(int k=0; k<n-i; k++){
        char ch2 = ('A' + k);
        printf("%c",ch2);
    }
    for(int l=n-i-2; l>=0; l--){
        char ch3 = ('A' + l);
        printf("%c",ch3);
    }
    printf("\n");
   }
    
    return 0;
}