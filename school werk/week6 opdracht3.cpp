/*
#include <stdint.h>
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
		if (n & (1 <<i))
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

int main()
{
	uint8_t value = BIT0 & BIT1; // Bijvoorbeeld, stel value in op een combinatie van BIT3 en BIT5.

	printf("Waarde in binaire notatie: ");
	printBinary(value);

	return 0;
}
*/