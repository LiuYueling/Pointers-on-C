#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// double b;

double mysqrt(double a, double x1)
{
	double x0;
	
	/*递归法*/
	{
		x0 = x1;
		x1 = (x0+a/x0)/2.0;
		if(fabs(x1-x0) > pow(10, -15))
			return mysqrt(a, x1);
		else
			return x1;
	}
	
	// /*迭代法*/
	// {
		// do 
		// {
			// x0 = x1;
			// x1 = (x0 + a/x0)/2.0;
		// } while(fabs(x1-x0) > pow(10, -15));
		// return 	x1;
	// }
}

int main()
{
    double a;
	
	printf("输入求平方根的值:");
    scanf("%lf", &a);
	
	// printf("输入求平方根的精度:");
    // scanf("%lf", &b);
	
	/*输入有效性判断*/
	if(a < 0)
	{
		printf("输入错误");
		system("pause");
		return 0;
	}
	
	printf("sqrt(%lf) = %.15lf \r\n", a, mysqrt(a, 0.1));
	system("pause");
	
	return 0;
}






