#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x, y, z;
    scanf("%lf %lf %lf",&a,&b,&c);
    x= b*b - 4*a*c;
    if(x<0)
    {
        printf("Impossivel calcular\n");
    }
    else if(a==0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        y= ( -b + sqrt(x))/(2*a);
        z= ( -b - sqrt(x))/(2*a);

        printf("R1 : %.5lf\n",y);
        printf("R2 : %.5lf\n",z);

    }
    return 0;
}
