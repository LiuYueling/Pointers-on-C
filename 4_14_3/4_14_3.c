#include <stdio.h>
#include <stdlib.h>

int main()
{
	double a,b,c;
	
//	system("chcp 65001");//utf-8
	
	printf("请输入三角形的边长：");
	scanf("%lf,%lf,%lf", &a, &b, &c);
	
	/********************************************
	*输入有效性分析
	*原理：	1.各个边长>0;
	*		2.两边之和大于第三边;
	*补充：	1.等边三角形判断;
	********************************************/
	if((a>0)&&(b>0)&&(c>0)&&((a+b)>c)&&((a+c)>b)&&((b+c)>a))
	{
		if((a==b)||(a==c)||(b==c))
		{
			if((a==b)&&(a==c)&&(b==c))
			{
				printf("这个是一个等边三角形\r\n");
			}
			else
			{
				printf("这个是一个等腰三角形\r\n");
			}
		}
		else
		{
			printf("这是一个不等边三角形\r\n");
		}
	}
	else
	{
		printf("这个不是三角形\r\n");
	}
	system("pause");
	
	return 0;
}


