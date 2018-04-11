#include<stdio.h>

double dicePossiblity(int n)
{
    double table[n];
    for( int i=0;i<n;i++)
    {
     	table[i]=0;
    }
    
    table[0]=1;
    for( int i=1;i<=n;i++)
    {
        for( int j=1; j<=6 && i-j>=0 ; j++)
        {
            table[i]+=table[i-j];
        }
    }
    return table[n];
    
}
int main ()
{
    int n;
    printf("Input Number : ");
    scanf("%d",&n);
    printf("\n Result :  %.0lf\n", dicePossiblity(n));
    return 0;
}
