#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,r,t;
    double d;
    scanf("%d",&t);
    while(t--){
    scanf("%d %d %d %d %d",&x1,&y1,&r,&x2,&y2);
    d = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
    if(d>r)
        printf("The point is inside the circle\n");
    else
        printf("The point is inside the circle\n");
    }
    return 0;

}
