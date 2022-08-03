//9.Write a program in C to find the square of any number using the function. 
#include<stdio.h>
void square(int n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    
    square(n);
    return 0;
}
void square(int n)
{
    int s;
    s=n*n;
    printf("%d",s);
}