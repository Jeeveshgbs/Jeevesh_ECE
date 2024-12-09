#include<stdio.h>
int main(){
    int inputNumber=0;
    printf("Enter a number:  \n");
    scanf("%d",&inputNumber);
    switch(inputNumber){
    
            case 1:{
                printf("The given number is 1");
                break;
            }
            case 2:{
                printf("The given number is 2");
                break;
            }
            case 3:{
                 printf("The given number is 3");
                 break;
            }
            default:{
                printf("The given number is greater than 3");
            }
        }
    return 0;
}

    