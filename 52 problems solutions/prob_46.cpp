#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t,a,b,c;
    double perimeter,area;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&a,&b,&c);
        perimeter = (a+b+c)/(double)2;
        area = sqrt(perimeter*(perimeter-a)*(perimeter-b)*(perimeter-c));
        printf("Area = %.3lf\n",area);
    }
    return 0;
}

