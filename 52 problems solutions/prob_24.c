#include<stdio.h>
int main()
{
    int i,t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i+=2)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}
