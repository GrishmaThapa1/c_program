#include <stdio.h>
int main(){
    double a,b;
    printf("Enter two numbers");
    scanf("%lf %lf",&a,&b);
    double sum=a+b;
    printf("The sum of the numbers is: %lf\n", sum);
    return 0;
}