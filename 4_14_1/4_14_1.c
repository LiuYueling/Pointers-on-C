#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// double b;

double mysqrt(double a, double x1)
{
	double x0;
	
	/*�ݹ鷨*/
	{
		x0 = x1;
		x1 = (x0+a/x0)/2.0;
		if(fabs(x1-x0) > pow(10, -15))
			return mysqrt(a, x1);
		else
			return x1;
	}
	
	// /*������*/
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
	
	printf("������ƽ������ֵ:");
    scanf("%lf", &a);
	
	// printf("������ƽ�����ľ���:");
    // scanf("%lf", &b);
	
	/*������Ч���ж�*/
	if(a < 0)
	{
		printf("�������");
		system("pause");
		return 0;
	}
	
	printf("sqrt(%lf) = %.15lf \r\n", a, mysqrt(a, 0.1));
	system("pause");
	
	return 0;
}






