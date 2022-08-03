//4.Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int prime(int );
int main()
{
    int x ;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Next Prime is %d",prime(x));
    return 0;
}
int prime(int x)
{
    int i,y;
    for(y=x+1;1;y++)
    {
        for(i=2;i<y;i++)
        {
            if(y%i==0)
            break;
        }
        if(y==i)
        return i;
    }
} 