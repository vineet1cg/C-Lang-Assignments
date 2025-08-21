#include<stdio.h>
int main (){
int a = 1;
int b = 1;
int sum = 1;
int num;
printf("Enter Nth Tearm To Show Its Digit : ");
scanf("%d",&num);
for(int i=1;i<=num-2;i++){
    sum = a + b;
    a = b;
    b = sum;
}
printf("The  %dth tearm of fibonacci  Is  %d\n",num,sum);


    return 0;
}