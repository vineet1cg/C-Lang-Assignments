#include<stdio.h>
int main(){
    
    int n;
    printf("Enter A Number To Check For Prime : ");
    scanf("%d",&n);
    int a =0;
    for(int i = 2;i<=n-1;i++){
        if(n%i==0){
            printf("Not A Prime Number\n");
            a = 1;
            break;
        }
    }
    if(n==1) printf("Niether Prime Nor Composite");
    else if(a==0){
        printf("Number Is Prime ! ");
    }
    return 0;
}