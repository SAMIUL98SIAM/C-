#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the decimal number");
    scanf("%d",&a);
    printf("\n decimal to binary: ");
    for(b=a;b>=0;b--){
        c=a>>b;
        if(c&1){
        printf("1");}
        else
        {
             printf("0");
        }

    }
}


