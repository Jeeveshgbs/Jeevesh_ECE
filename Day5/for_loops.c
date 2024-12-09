#include<stdio.h>
int main(){
    //for loop(inside)
    printf("inside:  \n");
    int i=0;
    for(i=0;i<=10;i++){
        printf("%d \n",i);
    }

    printf("outside: \n");
    int j=0;
    for(j=0;j<=10;j++){
        printf("%d \n",j);
    }
}