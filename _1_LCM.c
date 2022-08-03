//1.Write a function to calculate LCM of two numbers.(TSRS)
#include<stdio.h>
int lcm(int, int);
int main()
{
  int x,y;
  printf("Enter Two Number:");
  scanf("%d %d",&x,&y);
  printf("Lcm is %d",lcm(x,y));
  return 0;
}
int lcm(int a,int b)
{
    int i,lcm=1;
    for(i=2;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
           return i;
    }
    
}