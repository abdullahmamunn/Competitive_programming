#include<stdio.h>
#include<string.h>
void arrange_word(char str[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i;j<size;j++)
        {
            if(strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
            printf("%s",str);
        }
        printf("%s",str);
    }

}
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int i;
        char str[n];
        for(i=0;i<n;i++)
        {
           scanf(" %[^\n]",str[i]);
        }
        arrange_word(str,n);
    }
    return 0;
}
