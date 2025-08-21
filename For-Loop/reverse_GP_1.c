#include<stdio.h>
int main (){
    int n;
    float a=100;//Starting Point Of A GP.
    printf("Enter Numbers Of Terms To Print Of A GP : ");
    scanf("%d",&n);//Numbers Of Tearms User Wanna Print
    for(int i = 1;i<=n;i++){
        printf("%f\n",a);
        a = a*0.5;//Common Fact Of A GP
    }
}