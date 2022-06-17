#include<stdio.h>
int main()
{
    int i,x,n,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d %d",&x,&n);
    if(x>n){
        printf("Invalid!");
    }
    else{
        for(i = 1; i<=n; i++)
        {

            if(x*i>n)
                break;
                printf("%d\n",x*i);
        }
    }
    }
    return 0;
}
