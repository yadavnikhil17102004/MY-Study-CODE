#include <stdio.h>

int main() {
    // code to see if given number is divisible by 5
    int a, b;
    
    printf("Input a number: ");
    scanf("%d", &a);
    
    b = a % 5; // Check if 'a' is divisible by 5
    
    if (b == 0) {
        printf("The number is divisible by 5.\n");
    } else {
        printf("The number is not divisible by 5.\n");
    }

    return 0;
}