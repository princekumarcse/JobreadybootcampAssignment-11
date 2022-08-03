//5.Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void nprime(int);
int main()
{
    int n;
    printf("Enter N Number:");
    scanf("%d",&n);
    nprime(n);
    return 0;
}
void nprime(int x)
{
    int y,i;
    for(y=2;y<=x;y++)
    {
        for(i=2;i<y;i++)
        {
            if(y%i==0)
            break;
        }
        if(i>=y)
        printf("%d ",i);
    }
}