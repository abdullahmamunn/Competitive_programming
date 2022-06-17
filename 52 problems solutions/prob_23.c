#include<stdio.h>
int main()
{
    char str[100];
    int t,i;
    scanf("%d",&t);
    while(t--){
    scanf(" %[A-Z]",str);
        for(i=0; str[i] != '\0'; i++)
        {
            if(str[i]>= 'A' && str[i]<= 'Z')
            {
                printf("%d",str[i]-64);
            }
        }
        printf("\n");
    }
    return 0;
}
