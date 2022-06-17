#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,t,len;
    scanf("%d",&t);
    while(t--){
        scanf(" %[^\n]",str);
        len = strlen(str);
        for(i=len-1;i>=0;i--)
        {
            printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
