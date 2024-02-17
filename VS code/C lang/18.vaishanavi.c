#include <stdio.h>
// #include<string.h>
// int main()
// {
//     char a[2];
//     printf("Give a size for popcorns you want :(xl,l,m,s)");
//     scanf("%s",&a);
//     if (strcmp(a , "xl")==0)
//     {
//         printf("PRice is 250 \n");
//     }
//     else if (strcmp(a , "l")==0)
//     {
//         printf("PRice is 200 \n");
//     }
//     else{
//         printf("error");
//     }
//     return 0;
// }


int main(){
    char a;
    printf("Enter the type of popcorn:(a,b,c)");
    scanf("%c",&a);
    if (a == 'a'){
        printf("price = 250");
    }
    else if (a == 'b'){
        printf("price = 200");
    }
    else{
        printf("Invalid input!");
    }
    return 0;
}