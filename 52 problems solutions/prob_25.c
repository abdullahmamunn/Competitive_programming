#include<stdio.h>
int gcd(int a, int b)
{
    int temp;
    while(b !=0)
    {
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
int main()
{
    int n1,n2,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n1,&n2);
        printf("LCM = %d\n",(n1*n2)/gcd(n1,n2));
    }
    return 0;
}
