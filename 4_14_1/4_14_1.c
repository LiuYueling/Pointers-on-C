#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double x1, x2;
    float a;
	
    scanf("%f", &a);
    x2 = 1.0;
    do 
    {
        x1 = x2;
        x2 = (x1 + a/x1)/2;
    } while (fabs(x1-x2) > pow(10, -5));
    printf("value:%lf \r\n", x2);
	system("pause");
	
	return 0;
}

//double my_sqrt(double x)
//{
//	
//}



