#include<stdio.h>
int main()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        if(n & 1)
            printf("odd\n");
        else
            printf("even\n");
    }
    return 0;
}
