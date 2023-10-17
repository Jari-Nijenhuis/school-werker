/*
#include <stdio.h>

void optellen(int* array1, int* array2, int* array3, int lentgh);

int main()
{
	int array1[] = { 1, 2, 8, 4, 5};
	int array2[] = { 10, 20, 30, 40, 50, 60, 43, 89};
	int array3[5]; // de resulterende array waarin we de resultaten opslaan

	int length = sizeof(array1) / sizeof(array1[0]);

	optellen(array1, array2, array3, length);

	printf("arra3 na optellen: ");
	for (int i = 0; i < length; i++)
	{
		printf("%d", array3[i]);

		if (i < length - 1)
		{
			printf(", ");  // Voeg een komma en spatie toe tussen de elementen, behalve bij het laatste element
		}
	}
	return 0;
 }

void optellen(int* array1, int* array2, int* array3, int length)
{
	for (int i = 0; i < length; i++)
	{
		array3[i] = array1[i] + array2[i];
	}
}
*/