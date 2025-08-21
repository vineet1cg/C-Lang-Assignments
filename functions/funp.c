#include<stdio.h>
int sum(int a ,int b){
    return a + b;
}
int multiply(int a,int b){
    return a * b;
}
int main (){
    int x,y;
    printf("Enter Two Values For Addition And Multiplication \n:");
    scanf("%d",&x);
    scanf("%d\n",&y);
    printf("The Ans Of Sum Is %d\n",sum(x,y));
    printf("The Ans Of Multiplication %d\n",multiply(x,y));
    
}