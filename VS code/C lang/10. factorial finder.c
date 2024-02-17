#include<stdio.h>

int main(){
    int a=0, b, c, i;
    printf("Enter the value : ");
    scanf("%d", &b);
    //finding the factorial
    printf("Factorial of %d is :",b);
    for( i=1 ; i<=b ; i++ ){
        if (b%i==0)
        {
            printf("%d ",i);
        }
        
    }
    
    return 0;
}