// 2. Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int N,a=-1,b=1,c;
    printf("enter the value of N ");
    scanf("%d",&N);
    printf("first N terms of Fibonacci series : ");
    for(int i=0;i<N;i++)
    {
     c=a+b;
     printf("%d ",c);
     a=b;
     b=c;
    }
 return 0;

}

