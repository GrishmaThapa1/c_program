// #include<stdio.h>

// int main(){
//     float rate, qty;
//     printf("Enter rate of item: ");
//     scanf("%f",&rate);
//     printf("Enter quantity ");
//     scanf("%f",&qty);
//     float avg = (rate+qty)/2;
//     printf("The average is %.2f",avg);

// }

// #include <stdio.h>

int main() {
    float rate1, quantity1, rate2, quantity2;
    float t1, t2, average;

    printf("Enter  rate and quantity for first item: ");
    scanf("%f %f", &rate1, &quantity1);

    printf("Enter  rate and quantity for second item: ");
    scanf("%f %f", &rate2, &quantity2);

    t1 = rate1 * quantity1;
    t2 = rate2 * quantity2;

    average = (t1 + t2) / 2;

    printf("The average value is: %.2f\n", average);

    return 0;
}
 
 