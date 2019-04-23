#include <stdio.h>
#include <stdlib.h>

void set_bit(char bit_array[], unsigned bit_number)
{
	*(bit_array + bit_number) = 1;
}

void clear_bit(char bit_array[], unsigned bit_number)
{
	*(bit_array + bit_number) = 0;
}

void assign_bit(char bit_array[], unsigned bit_number, int value)
{
	*(bit_array + bit_number) = value==0 ? 0 : 1; 
}

int test_bit(char bit_array[], unsigned bit_number)
{
	return *(bit_array + bit_number)==0 ? 0 : 1; 
}

int main()
{
	char array[8] = {0, 1, 0, 1, 0, 1, 0, 1};
	
	
	
	
	
	
	system("pause");
	
	return 0;
}

