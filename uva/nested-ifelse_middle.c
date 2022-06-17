#include <stdio.h>
int main()
{
        int a,b,c,count=1,t,i;
        scanf("%d",&t);
        for(i = 0;i<t;i++)
		{
		    scanf("%d %d %d",&a,&b,&c);
		    if(a>b)
            {
                if(b>c)
                    printf("Case %d: %d\n",count++,b);
                else if(c>a)
                    printf("Case %d: %d\n",count++,a);
                else
                    printf("Case %d: %d\n",count++,c);
            }
            else{
                if(b<c)
                    printf("Case %d: %d\n",count++,b);
                else if(c<a)
                    printf("Case %d: %d\n",count++,a);
                else
                    printf("Case %d: %d\n",count++,c);
            }

		}
		return 0;
}
