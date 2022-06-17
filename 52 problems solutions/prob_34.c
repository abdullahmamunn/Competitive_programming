#include<stdio.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    while(t--){
    scanf("%d %d %d",&a,&b,&c);
    int i;
    for(i = 1; i<=c; i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("%d\n",i);
        }
    }

    }
    return 0;
}
