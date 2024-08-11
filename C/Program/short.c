#include <stdio.h>
int main(){
    short int a,b;
    printf("Enter two numbers");
    scanf("%hd %hd", &a,&b);
    short int sum= a+b;
    printf("The sum of the numbers is:%hd\n",sum);
    return 0;


}