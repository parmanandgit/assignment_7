// 8. Write a program to find next Prime number of a given number
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter a number ");
    scanf("%d",&n);
    j=n;
    while(1)
    {  j++;
    for(i=2;i<j;i++)
    {
     if(j%i==0)
      break;
    }
     if(i==j)
      {
        printf("%d ",i);
        break;
      }
     
    }
     return 0;
}