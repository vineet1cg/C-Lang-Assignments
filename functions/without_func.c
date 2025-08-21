#include<stdio.h>
int main (){
int num;
int i =1;
int b;
int c;
printf("Enter A Number To Count Its Factorial : ");

scanf("%d",&num);
scanf("%d",&b);
scanf("%d",&c);

int product1 = 1;
for (int i = 1; i<=num;i++){
product1 = product1 * i; 

}
int product2 = 1;
for (int i = 1; i<=b;i++){
product2 = product2 * i; 

}
int product3 = 1;
for (int i = 1; i<=c;i++){
product3 = product3 * i; 

}
printf("The Factorial Of Num Is %d\n",product1);
printf("The Factorial Of Num Is %d\n",product2);
printf("The Factorial Of Num Is %d\n",product3);
    return 0;

}