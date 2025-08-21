#include<stdio.h>
int main (){
    int n;
    printf("Enter A Numbers Of Terms To Display Of An Odd AP :");
    scanf("%d",&n);
    for(int i=1;i<=(2*n)-1;i=i+2){
        printf("%d\n",i);
    }
    
}