#include<stdio.h>
// function dec
int sum(int a, int b);
int main(){
    int a=10,b=10,res;
    res=sum(a,b);
    printf("the sum of %d and %d is %d  \n",a,b,res);
    res=sum(110,12);
    printf("the sum of 110 and 12 is %d  \n",res);
    res=sum(10,12);
    printf("the sum of 10 and 12 is %d  \n",res);
    res=sum(15,89);
    printf("the sum of 15 and 89 is %d  \n",res);
    res=sum(87,90);
    printf("the sum of 87 and 90 is %d  \n",res);
    return 0;
}

//function definition
int sum(int a, int b){   
    int res=a+b;
    return res;
}
