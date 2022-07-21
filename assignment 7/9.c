// 9. Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
int main()
{   int i,j,n,s=0;
    printf("Enter a number ");
    scanf("%d",&n);
    i=n;
    while(i)
    {
     j=i%10;
     i=i/10;
     s=s+j*j*j;
    }
    if(s==n)
    printf("%d is an armstrong number",n);
    else
    printf("%d is not an armstrong number",n);
    return 0;
}