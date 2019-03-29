#include <stdio.h>
#include <stdlib.h>

/**********************************************************************
- Function :	void copy_n(char dst[], char src[], int len)
- Description :	将src数组复制到dst数组中
**********************************************************************/
void copy_n(char dst[], const int dst_len, char src[], const int src_len)
{
	int i;
	
	for(i=0; dst_len>i; ++i)
	{
		*(dst + i) = i>src_len ? 0 : *(src + i);
	}
	// dst[dst_len-1] = '\0';//数组用字符串显示效果，添加字符串结尾
}


int main()
{
	char a[] = "hello world!";
	// char b[sizeof(a)/sizeof(char)];
	
	char b[sizeof(a)-5];
	
	copy_n(b, sizeof(b), a, sizeof(a));

	printf("%s\n", b);
	system("pause");
	
	return 0;
}

/**********************************************************************
Note:
	2019/03/29 16:00 
		创建工程；
		问题：sizeof(src[]) < sizeof(dst[])时未考虑将dst[]后部分置0；
	2019/03/29 17:50
		解决sizeof(src[]) < sizeof(dst[])时dst[]后部分置0
		note：
			形式参数，char a[] 等效 char *a 是一个地址可变的指针。
			实际参数，cahr a[] 与 char *a不同，char a[]的字符指针是一个常量，char *a的字符指针是一个变量
			a[x] == *(a+x)
	
**********************************************************************/