#include<stdio.h>
int main(){
    int inputNumber=0;
    printf("Enter a number:  ");
    scanf("%d",&inputNumber);
    if(inputNumber<0){
        printf("The number is less than 0");
    }
    else if(inputNumber>=0 && inputNumber<10){
        printf("The number is greater than 5 but less than 10");
    }
    else if(inputNumber>=10 && inputNumber<20){
        printf("The number is greater than 10 but less than 20");
    }    
    else{
        printf("The number is greater than or equals to 20");
    }
    return 0;
}