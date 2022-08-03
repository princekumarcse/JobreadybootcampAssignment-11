//8.Write a function to print PASCAL Triangle.(TSRN)
void pascal(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("d ",comb(i,j));
        }
        printf("\n");
    }
} 