//7.Write a function to print first N terms of Fibonacci series (TSRN) 
#include<stdio.h>
void fibonacci(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    fibonacci(x);
    return 0;
}
void fibonacci(int n)
{
    int a=-1,b=1,c,i;
    for(i=1;i<=n;i++)
    {
       c=a+b;
       a=b;
       b=c;
       printf("%d ",c);
    }
    
    
}