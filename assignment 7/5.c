// 5. Write a program to check whether two given numbers are co-prime numbers or not
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
            if(i==1)
              printf("%d and %d are co-prime ",a,b);
            else
              printf("%d and %d are not co-prime ",a,b);
            break;
        }
    }
    return 0;
}