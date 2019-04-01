#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int substr(char dst[], char src[], int start, int len)
{
	int i;
	unsigned int src_len;
	
	/*获得src数组偏移后的字符串长度*/
	src_len = strlen(src+start);
	
	/*判断偏移是否越界*/
	if(start>src_len) 
	{
		printf("src数组偏移量错误");
		return -1;//返回错误代码
	}
	
	for(i=0; len-1>i; ++i)
	{
		*(dst+i) = i>=src_len ? 0 : *(src+start+i);
	}
	*(dst+len-1) = 0;
	
	return 0;
}

