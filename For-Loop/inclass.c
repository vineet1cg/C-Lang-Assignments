#include <stdio.h>

int main()
{
   
    int n1;
    int n2;
    int f;
    printf("Select a Operator + - * / % \n");
    scanf("%d\n",&f);
    printf("Enter A Operator And Two Nums : \n");
    scanf("%d\n",&n1);
    scanf("%d\n",&n2);
    
    switch(f){
        case 1 : printf("%d\n",n1+n2);
        break; 
        case 2 : printf("%d\n",n1-n2);
        break; 
        case 3 : printf("%d\n",n1*n2);
        break;
        case 4 : printf("%d\n",n1/n2);
        break;
        case 5 : printf("%d\n",n1%n2);
        break;
        default  : printf("Invalid Operator!!");
    }
    return 0;
}