#include<stdio.h>
int main()
{
    int a_size,i,j,cnt,tem,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&a_size);
        int a[a_size];
        for(i=0;i<a_size;i++)
        {
            scanf("%d",&a[i]);
        }
        cnt= 0;
        for(i=0;i<a_size;i++)
        {
            for(j=0;j<a_size-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    tem = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tem;
                    cnt++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",cnt);
        cnt =0;
    }
    return 0;
}

