#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int t,i,count = 0;
    scanf("%d",&t);
    while(t--){
    scanf(" %[^\n]",str);
    for( i = 0; i<strlen(str); i++){
        if(str[i] == str[i+1])
        {
            count++;
        }
    }

    for(i = 0; i<strlen(str); i++){
            if(str[i] == str[i+1])
                 continue;
        printf("%c = %d\n",str[i],count);
    }
    printf("\n");
    count = 0;
    }
    return 0;
}
