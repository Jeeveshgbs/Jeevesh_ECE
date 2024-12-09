#include<stdio.h>
int main(){
    int inputNumber=0;
    printf("Enter a number:  ");
    scanf("%d",&inputNumber);
    (inputNumber>5)?printf("Number is greater than 5"):printf("Number is less than 5");
    return 0;
}