#include<stdio.h>
//fun dec
int sumOfOddNo(int);

int main(){
    int inputNumber=0,res;
    printf("Enter a number: \n");
    scanf("%d",&inputNumber);
    res=sumOfOddNo(inputNumber);
    printf("the sum of n odd number  %d  is %d",inputNumber,res);
    return 0;
}

int sumOfOddNo(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    return sum;
}