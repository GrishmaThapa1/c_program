#include <stdio.h>
int main(){
    // int inches,feet;
    // feet=12;
    // inches=12*feet;
    // printf("%d feet\n",feet);
    // printf("%d inches\n",inches);
    // return 0;

    int feet;
    printf("\n Enter the value of feet to convert");
    scanf("%d",&feet);
    int inches=feet*12;
    printf("The value of %d feet in inches is %d inches",feet,inches);
    return 0;
}