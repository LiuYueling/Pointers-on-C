#include <stdio.h>
#include <stdlib.h>

int main()
{
	char input_char;
	
	printf("ÇëÊäÈëÒ»¸ö×Ö·û£º");
	input_char = getchar();
	putchar('\n');
	
	if('a'<=input_char && 'a'+13>=input_char)
	{
		putchar(input_char + 13);
	}
	else if('z'-13<=input_char && 'z'>=input_char)
	{
		putchar(input_char - 13);
	}
	else if('A'<=input_char && 'A'+13>=input_char)
	{
		putchar(input_char + 13);
	}
	else if('Z'-13<=input_char && 'Z'>=input_char)
	{
		putchar(input_char -13);
	}
	else
	{
		putchar(input_char);
	}
	putchar('\n');
	
	system("pause");
		
	return 0;
}
