/*
#include <stdio.h>

int komtVoor(int* array, int length, int getal);

int main()
{
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int getal = 0;
	int length = sizeof(array) / sizeof(array[0]);

	printf("geef getal tussen de 0 en 11?");
	scanf_s("%d", &getal);

	int Check = komtVoor(array, length, getal);

	if (Check == 1)
	{
		printf("getal komt overeen met een getal in array.");
	}
	else
	{
		printf("getal komt niet overeen met een getal in array.");
	}

	return 0;
}


int komtVoor(int* array, int length, int getal)
{
	int check = 0;

	for (int i = 0; i < length; i++)
	{
		if (array[i] == getal)
		{
			check = 1;
			break;
		}
 	}
	if (check == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
*/