#include<stdio.h>
int main (){
int n;
printf("Enter A Digit To Reverse It : ");
scanf("%d",&n);
int r = 0;
int ld = 0;
while(n!=0){
     r = r*10;
    r = r + (n%10);
    n = n/10;
    
}
printf("The Reverse Digit Is : %d",r);

    return 0;

}