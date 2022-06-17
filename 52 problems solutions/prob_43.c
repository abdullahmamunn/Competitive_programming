#include<stdio.h>
#include<math.h>
int main()
{
    int t,p,q,c,mod;
    int temp = 1,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&p,&q,&c);
        if(p<0 || q<0)
            break;
        else

            for(i=1;i<=q;i++)
            {
                temp = temp * p;
            }
        printf("Result = %d\n",temp%c);
        temp = 1;
    }
    return 0;
}
