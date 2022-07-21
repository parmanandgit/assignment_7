// 3. Write a program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>
int main()
{
    int N,a=-1,b=1,c=0;
    printf("enter the value of N ");
    scanf("%d",&N);
while(N>c)
    {
     c=a+b;
     if(N==c)
      { 
        printf("Yes, the number %d is in the fibonacci series",N);
      }
      a=b;
     b=c;
    }
    if(N<c)
    printf("No, the number %d is not in the fibonacci series",N);
 return 0;

}
