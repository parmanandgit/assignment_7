// 7. Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main(){
    int i,j,a,b;
    printf("Enter the value of a and b (b>a) ");
    scanf("%d%d",&a,&b);
    printf("prime number between a and b are :");
    for(j=a+1;j<b;j++){
    for(i=2;i<j;i++)
    {
     if(j%i==0)
      break;
    }
     if(i==j)
      {
        printf("%d ",i);
      }
    }
    return 0;
    }