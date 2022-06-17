#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,i,len,c;
    char str[100];
    scanf("%d",&t);
    while(t--)
    {
       scanf("\n%[^\n]",str);
       len = strlen(str);
       c = 0;
       for(i = 0; i<len ; i++)
       {
           if(str[i] == ' ' && str[i+1] != ' ' && str[i] !='\0')
           {
             c++;
           }

       }
       printf("%d\n",c+1);
    }
    return 0;
}
