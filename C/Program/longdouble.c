#include<stdio.h>
int main(){
    long double a,b;
    printf("Enter two numbers");
    scanf("%lf %lf", &a,&b);
    long double sum=a+b;
    printf("The sum of the numbers is: %lf\n",sum);
    return 0;
}