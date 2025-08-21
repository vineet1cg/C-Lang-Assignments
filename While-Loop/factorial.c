#include<stdio.h>
int main (){
int num;
printf("Enter A Number To Count Its Factorial : ");
scanf("%d",&num);
int product = 1;
for (int i = 1; i<=num;i++){
product = product * i; 

}
printf("%d\n",product);
    return 0;

}