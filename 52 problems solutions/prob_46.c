#include<stdio.h>
int main()
{
    int t,a,b,c;
    double perimeter,area;
    scanf("%d%d%d",&a,&b,&c);
    perimeter = (a+b+c)/(double)2;
    printf("%lf",perimeter);
    area = sqrt(perimeter*(perimeter-a)*(perimeter-b)*(perimeter-c));
    printf("%.3lf",area);
    return 0;
}
