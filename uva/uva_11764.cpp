#include<stdio.h>
int main()
{
    int t,i,high=0,low=0,a_size,k=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a_size);
        int a[a_size];
        for(i=0;i<a_size;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<a_size-1;i++)
        {
            if(a[i]<a[i+1])
            {
                high++;
            }
            else if(a[i] == a[i+1])
            {
                continue;
            }
            else{
                low++;
            }
        }
        printf("Case %d: %d %d\n",k++,high,low);
        high = 0;
        low = 0;
    }
}
