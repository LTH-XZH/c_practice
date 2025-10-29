#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
   int z = n;
   
   while(1)
   {
    z += (int)n/k;
    n += (int)n/k-(int)n/k*k;
    if (n/k < 1)
    {
        break;
    }
    
   }
    printf("%d",z);
    return 0;
}