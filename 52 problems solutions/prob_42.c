#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    int i;
        for(i=n;i>=0;i--)
        {
            if(i==0)
                printf("1\n");
            else if(i==1)
                printf("2 + ");
            else
                printf("2^%d + ",i);
        }
    }
    return 0;
}
