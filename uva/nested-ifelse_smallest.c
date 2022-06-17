#include <stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c) != EOF)
    {
        if(a<b)
        {
           if(a<c)
            printf("%d sobcheye choto\n",a);
           else
            printf("%d sobcheye choto\n",c);
        }
        else
        {
            if(b<c)
                printf("%d sobcheye choto\n",b);
            else
                printf("%d sobcheye choto\n",c);
        }
    }
    return 0;
}
