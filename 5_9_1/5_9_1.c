#include <stdio.h>
#include <stdlib.h>

int main()
{
	char input_char;
	
	printf("ÊäÈëÒ»¸ö×Ö·û£º");
	input_char = getchar();
	putchar('\n');
	if('a'<=input_char && 'z'>=input_char)
	{
		putchar(input_char - 32);
	}
	else if('A'<=input_char && 'Z'>=input_char)
	{
		putchar(input_char + 32);
	}
	else
	{
		putchar(input_char);
	}
	
	putchar('\n');
	
	system("pause");
	
	return 0;
}

