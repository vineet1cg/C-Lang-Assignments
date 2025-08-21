#include<stdio.h>
int factorial(int num){
    int product = 1;
    for (int i = 1; i<=num;i++){
product = product * i; 

}
return product;
}
int main(){
   
    int n1;
    n1 = factorial(6);
    printf("The Factorial Is %d\n",n1 );
    int n2;
    n2 = factorial(4);
    printf("The Factorial Is %d\n",n2 );
    int n3;
    n3 = factorial(7);
    printf("The Factorial Is %d\n",n3 );

}