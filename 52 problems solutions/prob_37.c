#include<stdio.h>
int main()
{
    int t,n,rev;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        while(n!=0)
        {
            //rev = rev * 10;
            rev = rev + n%10;
            n = n/10;
        }
        printf("%d\n",rev);
    }
    return 0;
}
