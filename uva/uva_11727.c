#include <stdio.h>
int main()
{
    int t,i,a,b,c,count=1;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && b<c)
            printf("Case %d: %d\n",i+1,a);
        else if(b<a && b<c)
            printf("Case %d: %d\n",i+1,c);
        else
            printf("Case %d: %d\n",i+1,b);
    }
    return 0;
}
