#include<stdio.h>
int main()
{
    int l,w,h,t,i=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&l,&h,&w);
        if(l>20 || h>20 || w>20)
        {
            printf("Case %d: bad\n",i++);
        }
        else
        {
            printf("Case %d: good\n",i++);
        }
    }
    return 0;
}
