// 10. Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
int main()
{   int i,j,k,s=0;
 for(k=0;k<1000;k++){
    i=k;
    s=0;
    while(i)
    {
     j=i%10;
     i=i/10;
     s=s+j*j*j;
    }
    if(s==k)
    printf("%d ",k);
}
return 0;

}