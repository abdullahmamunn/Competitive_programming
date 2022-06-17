#include<stdio.h>
int main()
{
    int i,j,N;
    scanf("%d",&N);
    for(i=N-1;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(j=0;j<N-i;j++)
        {
            printf("%d",j%2);
        }
        printf("\n");
    }
    return 0;
}

