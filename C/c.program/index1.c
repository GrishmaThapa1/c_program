#include <stdio.h>
int main(){
    int a,b,c,d,e,f;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("sum is %d\n",c);
    printf("difference is %d\n",d);
    printf("product is %d\n",e);
    printf("division is %d\n",f);
    return 0;
}