#include<stdio.h>
#include<math.h>
int main()
{
    int t,num;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&num);
        int sq_root = sqrt(num);
        if(sq_root*sq_root == num)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
