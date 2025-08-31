#include <stdio.h>
int main (){
    int a;
    printf("Enter A Number : ");
    scanf("%d",&a);
    int x = 1;
    for(int i=1;i<=10;i++){
x = a * i;
printf("%d\n",x);
    }
}