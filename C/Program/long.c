#include<stdio.h>
int main(){
    long int a,b;
    printf("Enter two numbers");
    scanf("%ld %ld", &a,&b);
    long int sum= a+b;
    printf("The sum of the numbers is: %ld\n", sum);
    return 0;
}