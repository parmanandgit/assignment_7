// 4. Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
    for(int i=a>b?b:a;i;i--)
    {
        if(a%i==0&&b%i==0)
        {
            printf("The HCF of %d and %d is %d",a,b,i);
            break;
        }
    }
    return 0;
}