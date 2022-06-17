#include<stdio.h>
int main()
{
  int a,b,c,i,t,j;
  scanf("%d",&t);
  for(j=1;j<=t;j++)
    {
   scanf("%d %d %d",&a,&b,&c);
      for(i= a; i<=b; i++)
      {
        if(i%c==0){
            printf("%d\n",i);
        }
      }
   }
  return 0;

}
