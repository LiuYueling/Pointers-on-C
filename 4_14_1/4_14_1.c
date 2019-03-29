#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*递归法*/
// double mysqrt(double a,double x0)
// {
	// double x1;
	
	// x1 = (x0+a/x0)/2.0;
	// if(fabs(x1-x0) > pow(10, -5))
		// return mysqrt(a,x1);
	// else
		// return x1;
// }

int main()
{
	double x1, x2;
    float a;
	
	/*迭代法*/
    scanf("%f", &a);
    x2 = 1.0;
    do 
    {
        x1 = x2;
        x2 = (x1 + a/x1)/2;
    } while (fabs(x1-x2) > pow(10, -5));
    printf("value:%lf \r\n", x2);
	
	/*递归法*/
	//printf("value:%lf \r\n", mysqrt(a, 1.0));
	system("pause");
	
	return 0;
}






