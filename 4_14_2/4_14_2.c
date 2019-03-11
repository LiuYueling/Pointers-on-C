#include <stdio.h>
#include <stdlib.h>

int main()
{
	for(int i=1; i<=100; i++)
	{
		if(i%2 == 1)
			printf("%d\r\n", i);
		else
			continue;
	}
	
	system("pause");
	
	return 0;
}

