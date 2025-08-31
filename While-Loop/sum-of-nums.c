#include <stdio.h>
int main (){
    printf("Enter Value To Count Its Sum : ");
    int n,digit;
    scanf("%d",&n);
    int sum = 0;
    for(;n>0;n=n/10){
        digit = n %10;
        sum = sum + digit;

    }
    printf("%d\n",sum);
}