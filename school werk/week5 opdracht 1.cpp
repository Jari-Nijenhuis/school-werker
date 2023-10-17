/*
#include <stdio.h>

void kwadrateer(int* array, int lengte) 
{
    for (int i = 0; i < lengte; i++) 
    {
        array[i] = array[i] * array[i];
    }
}

int main() 
{
    int Array[11] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int lengte = sizeof(Array) / sizeof(Array[0]);      //berekenen de lengte van de array door de totale grootte van de array te delen door de grootte van een enkel element.

    printf("Oorspronkelijke array: ");

    for (int i = 0; i < lengte; i++) 
    {
        printf("%d ", Array[i]);
    }

    kwadrateer(Array, lengte);

    printf("\nGekwadrateerde array: ");

    for (int i = 0; i < lengte; i++) 
    {
        printf("%d ", Array[i]);
    }

    return 0;
}
*/