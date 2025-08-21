#include<stdio.h>
int main (){
    int n;
    printf("Enter A Number To Count Sum Of Digits : ");
    scanf("%d",&n);
  int  sum = 0;
  int  ld = 0;
  while(n!=0){
    ld = n%10;
    sum = sum + ld;
    n = n/10;


  }
    printf("The Sum Of Digits Are %d\n",sum);
    
    return 0;

}