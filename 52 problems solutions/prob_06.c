#include<stdio.h>
int main()
{
    int t,n,msd,lsd;
    scanf("%d",&t);
    while(t--){
    lsd = n%10;
    while (n!=0)
    {
        msd = n%10;
        n = n/10;
    }
    printf("Sum = %d\n msd = %d lsd = %d\n",msd+lsd);
    }
    return 0;
}
