#include<stdio.h>
#include<string.h>
#define size 1000
int main()
{
    int t,i,count=0;
    char str[size];
    scanf("%d",&t);
    while(t--){
    scanf(" %[^\n]",str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
         {
             printf("%c",str[i]);
         }

    }
    printf("\n");
    for(i=0;i<strlen(str);i++)
    {
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] !=' ')
         {
             printf("%c",str[i]);
         }
    }
             printf("\n");

    }
    return 0;
}

