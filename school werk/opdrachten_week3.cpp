/*
#include <stdio.h>

void opdracht9()
{
	int index;
	printf("Tot welke index? ");
	scanf_s("%d", &index);
	int A = 0;
	int B = 1;
	for (int I = 0; I < index + 1; I++)
	{
		int fibo = A + B;

		printf("Index %d: %d (%d - %d)\n", I, fibo, A, B);

		A = B;
		B = fibo;
	}
}

void opdracht10()
{
	int getal;
	int num;
	int uitkomst;
	num = 0;
	uitkomst = 0;

	printf("voergetal in: ");
	scanf_s("%d", &num);


	for (int I = 2; I * I <= num; I++)
	{
		if (num % I == 0)
		{
			uitkomst = 1;
		}
	}

	if (uitkomst == 1)
	{
		printf("%d is geen priemgetal.\n", num);
	}
	else
	{
		printf("%d is een priemgetal.\n", num);
	}

	
}


void opdracht11()
{
	int N;

	for (int I = 0; I < N; I++)
	{
		
	}
	
}

int main()
{
	int opdracht;
	printf("Welke opdracht? ");
	scanf_s("%d", &opdracht);

	switch (opdracht)
	{
	case 1: opdracht9(); break;
	case 2: opdracht10(); break;
	case 3: opdracht11(); break;
	default:
		break;
	}
}*/
