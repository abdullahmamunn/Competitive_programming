#include<stdio.h>
int main()
{
    int t,n,m,i,j,k;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",m);
        }
        printf("\n");


    }
    return 0;
}
