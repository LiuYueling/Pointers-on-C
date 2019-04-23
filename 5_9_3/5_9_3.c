#include <stdio.h>
#include <stdlib.h>

unsigned int reverse_bits(unsigned int value)
{
	unsigned int i,j;
	
	for(i=0,j=0; i<sizeof(unsigned int)*8; i++)
	{
		j = (j<<1) + (value>>i&0x01);
	}
	
	return j;
}

int main()
{
	unsigned int Value;
	
	scanf("%u", &Value);
	printf("%x\n",Value);
	
	Value = reverse_bits(Value);
	
	printf("%x\n",Value);
	
	system("pause");
	
	return 0;
}

