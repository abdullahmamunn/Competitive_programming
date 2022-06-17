#include <stdio.h>
long long main_algo(long long n)
{
    long long count = 0;
    while(1)
    {
       // printf("%lld ",n);
         count++;
        //printf("%d\n",count);
        if(n==1)
            break;
        else if(n%2 == 1)
             n = 3*n + 1;
        else
             n = n/2;
    }
    return count;
    printf("%d",count);
    // printf("Total count %lld",count);
}
//long long maxcycle(long long i, long long j)
//{
//    long long max = 0,cycle;
//    while(i<=j)
//    {
//        cycle = main_algo(i);
//    }
//    return cycle;
//}
int main()
{
    long long i,j,b,c;
    while(scanf("%lld",&i) != EOF)
        main_algo(i);
        b = main_algo(c);
        printf("%lld",b);

    return 0;

}
