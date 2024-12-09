#include<stdio.h>
int main(){
    int inputNumber=0;
    printf("Enter a Number: \n");
    scanf("%d",&inputNumber);
    if(inputNumber%2==0){
        printf("The given number is even");
    }
    else{
        printf("The given number is odd");
    }
    
    return 0;
    }
