#include<stdio.h>
int isPrime(int n)
{
    int i;
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(i=3;i<n;i=i+2)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int i,count=0,t,start,end;
    scanf("%d",&t);
    while(t--){
    scanf("%d %d",&start,&end);
    for(i=start;i<=end;i++)
    {
        if(isPrime(i))
        {
            count++;
        }
    }
     printf("%d\n",count);
     count = 0;
    }
    return 0;
}
