#include <stdio.h>
int main()
{
    int a,b,i,t,sum;
    scanf("%d",&t);
    for(i = 0; i<t; i++)
    {
        scanf("%d %d",&a,&b);
         sum = 0;
        while(a<=b)
        {
            if(a&1)
             sum = sum + a;
             a++;
        }
        printf("Case %d: %d\n",i+1,sum);
    }
    return 0;
}
