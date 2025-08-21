#include<stdio.h>
int main (){
    int n;
    int a=3;//Starting Point Of A GP.
    printf("Enter Numbers Of Terms To Print Of A GP : ");
    scanf("%d",&n);//Numbers Of Tearms User Wanna Print
    for(int i = 1;i<=n;i++){
        printf("%d\n",a);
        a = a*4;//Common Fact Of A GP
    }
}