#include<stdio.h>
char main(){
    char arr[5];
    printf("Enter the array elements: \n");
    for(char i=0;i<5;i++){
        scanf("%c",&arr[i]);
        getchar();
    }
    printf("Array elements are: \n");
    for(char i=0;i<5;i++){
        printf("%c \n",arr[i]);
    }
    return 0;
}
