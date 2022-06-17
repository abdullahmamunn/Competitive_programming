#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],last;
    int t,i,len,last_num;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%s",str);
        len = strlen(str);
        last = str[len-1];
        last_num = last - '0';
        if(last_num & 1)
            printf("odd\n");
        else
            printf("even\n");
    }

    return 0;
}
