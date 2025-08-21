#include<stdio.h>
int main(){
int n;
printf("Enter A Number To Count Its Digit : ");
scanf("%d",&n);
int count = 0;
while(n!=0){
    n=n/10;
    count++;


}
printf("%d\n",count);


    return 0;
}