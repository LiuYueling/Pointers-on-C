#include <stdio.h>
#include <stdlib.h>

/**********************************************************************
- Function :	void copy_n(char dst[], char src[], int len)
- Description :	将src数组复制到dst数组中
**********************************************************************/
void copy_n(char dst[], char src[], int len)
{
	int i;
	
	for(i=0; len>i; ++i)
	{
		*(dst + i) = *(src + i);
	}
}

int main()
{
	char a[] = "hello world!";
	char b[sizeof(a)/sizeof(char)];
	
	copy_n(b, a, sizeof(a)/sizeof(char));
	
	printf("%s\n", b);
	system("pause");
	
	return 0;
}

/**********************************************************************
Note:
	2019/03/29 16:00 
		创建工程；
		问题：sizeof(src[]) < sizeof(dst[])时未考虑将dst[]后部分置0；

	
**********************************************************************/