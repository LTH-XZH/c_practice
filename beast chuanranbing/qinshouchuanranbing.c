#include<stdio.h>
#include<math.h>
int main()
{
    int x,n;
    scanf("%d %d",&x,&n);
    int s = pow(x+1,n);
    printf("%d",s);
    return 0;
}