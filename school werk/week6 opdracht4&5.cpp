/*#include <stdint.h>
#include <stdio.h>


uint8_t BIT0 = 0b00000001;
uint8_t BIT1 = 0b00000010;
uint8_t BIT2 = 0b00000100;
uint8_t BIT3 = 0b00001000;
uint8_t BIT4 = 0b00010000;
uint8_t BIT5 = 0b00100000;
uint8_t BIT6 = 0b01000000;
uint8_t BIT7 = 0b10000000;

void printBinary(uint8_t n)
{
	for (int i = 7; i >= 0; i--)
	{
		if (n & (1 << i))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
}
uint8_t bitOR(int8_t a, uint8_t b)
{
	uint8_t c = a | b;

	return c;
}

uint8_t bitANDINV(uint8_t a, uint8_t b)
{
	uint8_t c = a & b;

	return ~c;
}
uint8_t bitTOGGLE(uint8_t a, uint8_t b)
{
	uint8_t c = a ^ b;

	return c;
}

int main()
{
	uint8_t A = BIT7 | BIT4;
	uint8_t B = BIT7 | BIT6 | BIT5 | BIT4 | BIT1 | BIT0;

	uint8_t C = bitOR(A, B);

	printf("Waarde in binaire notatie: ");
	printBinary(C);

	uint8_t D = bitANDINV(A, B);

	printf("Waarde in binaire notatie: ");
	printBinary(D);

	uint8_t E = bitTOGGLE(A, B);

	printf("Waarde in binaire notatie: ");
	printBinary(E);

	return 0;
}
*/