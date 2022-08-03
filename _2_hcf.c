//2.Write a function to calculate HCF of two numbers. (TSRS) 
#include<stdio.h>
int hcf(int,int);
int main()
{
    int x,y;
    printf("Enter Two Numbers:");
    scanf("%d%d",&x,&y);
    printf("Hcf is %d",hcf(x,y));
    return 0;
}
int hcf(int a,int b)
{
    int i,n;
   n=a<b?a:b;
    for(i=n;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        return i;
    }
}