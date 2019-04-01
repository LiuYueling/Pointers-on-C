#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void deblank(char string[])
{
	unsigned int i,j,string_len;
	
	// string_len = strlen(string);
	
	for(i=0,j=0; *(string+j)!=0; ++i,++j)
	{
		if(*(string+j) == ' ')
		{
			do{
				++j;
			}while(*(string+j) == ' ');	
			--j;
		}
		*(string+i) = *(string+j);
	}
	*(string+i) = 0;
}


int main()
{
	char a[128];
	
	gets(a);
	
	deblank(a);
	
	puts(a);
	
	system("pause");
	
	return 0;
}
