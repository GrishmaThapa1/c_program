#include<stdio.h>
int main(){
//     int a=7;
//     int b=4;
//   int result= a&b;
//   int c= a|b;
//    int d=a^b;
//    int not= ~a;
//    int leftshift= a<<b;
//    int rightshift=a>>b;
//    printf("%d\n",c);
  
//   printf("%d\n",d);
  
//   printf("Result: %d\n",result);
//   printf("%d\n",not);
//   printf("%d\n",leftshift);
//   printf("%d\n",rightshift);
//   return 0;

//   int a=10, b=20, c;
//   c=(a<b)? a+2:b;
//   printf("c=%d",c);
//   return 0;

float unit_price=10.0, dis1=0.05, dis2=0.1,
dis3=0.15, total_price;
int qty=11;
total_price=qty*unit_price*(1.0-
(qty>50?dis1: (
    qty>20?dis2:(
         qty>10? dis3:
         0.0))));
         printf("The total price is %.2f\n", total_price);
         return 0;
}

