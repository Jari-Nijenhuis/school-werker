/*
#include <stdio.h>

int som(int* array, int length)
{
	int w = 0;
	for (int i = 0; i < length; i++)
	{
		w = array[i] + w;
	}
	return w;
}

int main()
{
	int Array[7] = { 4, 6, 3, 7, 2, 8};
	int length = sizeof(Array) / sizeof(Array[0]);

	printf("Oospronkelijke array: ");

	for (int i = 0; i < length; i++)
	{
		printf("%d ", Array[i]);
	}

	int h = som(Array, length);

	printf("\nBij elkaar opgtelde van array");
	printf("\n%d", h);

	return 0;
}
*/