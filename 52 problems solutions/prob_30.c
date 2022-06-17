#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int i,sum = 0;
        for(i = 1; i<n; i++)
        {
            if(n%i==0)
            {
                sum =  sum + i;
            }
        }
        if(sum == n){
            printf("YES, %d is a perfect number!\n",n);
        }
        else{
            printf("NO, %d is not a perfect number\n",n);
        }
    }
    return 0;
}
