#include<stdio.h>

int main()
{
    char str[10000];
    int count = 0,t,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&t);
        scanf("%[^\n]",str);
        for(i=0; str[i]!='\0'; i++)
            {
                if(str[i] == ' ' && str[i+1]!=' ' && str[i+1] != '\0'){
                    count++;
                }
            }
    printf("%d\n",count+1);
    count = 0;

    }

    return 0;
}

