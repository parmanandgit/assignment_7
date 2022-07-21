// 1. Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    int N,a=-1,b=1,c;
    printf("enter the value of N ");
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
     c=a+b;
     a=b;
     b=c;
    }
    printf("tne %dth term of fibonnaci series is %d",N,c);
 return 0;

}