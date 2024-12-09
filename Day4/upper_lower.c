#include<stdio.h>
int main(){
    char inputChar;
    printf("Enter a character: \n");
    scanf("%c",&inputChar);
    if(inputChar>=65 && inputChar<=90){
        printf("The character is upper case");
    }
    else{
        printf("The character is lower case");
    }

}
