#include<stdio.h>
int main()
{
    int t,n,i,count=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=5; n/i>=1; i=i*5)
        {
            count = count + n/i;
        }
        printf("%d\n",count);
        count = 0;
    }
    return 0;
}
