//3.Write a function to check whether a given number is Prime or not. (TSRS)
int checkprime(int x)
{
    int i;
    for(i=2;i<=x;i++)
    {
        if(x%i==0)
        return 0;
    }
    if(i>x)
    return i;
} 