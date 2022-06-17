#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],res;
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %[^\n]",str);
        for(i=0;str[i]!= '\0';i++)
        {
            if(str[i] == 'R')
                str[i] = str[i+1];
            if(str[i] == 'L')
                str[i] = str[i-1];
        }
          printf("%s\n",str);

    }
    return 0;
}
