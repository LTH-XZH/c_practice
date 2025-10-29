#include<stdio.h>
#include<math.h>

//void function(double x)
int main()
{
    int num;
    double a,b,c,d;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);

    for(double i = -100.0000; i<=100.0000;i+=0.0001)
    {
        double r = i+0.0001;

        if((a*pow(i,3)+b*i*i+c*i+d)*(a*pow(r,3)+b*r*r+c*r+d)<0)
        {
            printf("%.2lf ",i);
            num++;
        }
        if(num == 3)
          break;
    }
    return 0;
}
/*void function(x)
{
    double a,b,c,d;
    double y =a*pow(x,3)+b*pow(x,2)+c*x+d;
}*/
