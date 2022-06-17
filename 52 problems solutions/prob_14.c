#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
    int t,i,count=0;;
    char s[2];
    scanf("%d",&t);
    while(t--){
        scanf(" %[^\n]",str);
        scanf(" %[^\n]",s);
        for(i = 0; i<strlen(str); i++){
            if(s[0] == str[i])
            {
                 count++;
            }
        }
        if(count == 0)
            printf("'%s' is not present\n",s);
        else
            printf("Occurrence of '%s' in '%s' = %d\n",s,str,count);
        count = 0;

    }
    return 0;
}
