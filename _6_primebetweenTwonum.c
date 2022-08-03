//6.Write a function to print all Prime numbers between two given numbers. (TSRN) 
#include<stdio.h>
void prime(int,int);
int main()
{
    int x,y;
    printf("Enter Two Numbers:");
    scanf("%d%d",&x,&y);
    prime(x,y);
    return 0;
}
void prime(int a,int b)
{
    int x,i;
    for(x=a+1;x<b;x++)
    {
        for(i=2;i<x;i++)
        {
            if(x%i==0)
            break;
        }
        if(i==x)
        printf("%d ",x);
    }
}