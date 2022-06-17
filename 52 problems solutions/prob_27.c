#include<stdio.h>
#include<math.h>
int total_digits(int n)
{
    int count = 0;
    while(n!=0)
    {
        n = n/10;
        count++;
    }
    return count;
}
void is_armstrong(int n)
{
    double sum = 0,temp;
    temp = n;
    int count,mod;
    count = total_digits(n);
    while(n!=0)
    {
       mod = n%10;
       sum = sum + pow(mod,count);
       n = n/10;
    }
    if(temp == sum)
        printf("Yes armstrong %lf %lf\n",temp,sum);
    else
        printf("No not armstrong %lf %lf\n",temp,sum);
}
int main()

{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        is_armstrong(x);
    }

    return 0;
}
