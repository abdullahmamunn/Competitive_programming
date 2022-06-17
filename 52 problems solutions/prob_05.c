#include<stdio.h>
int main()
{
    int i,j,t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i = 0; i<n; i++)
        {
           for(j = 0; j<n; j++)
           {
               printf("*",j);
           }
           printf("\n");
        }
        printf("\n");
    }
    return 0;
}
