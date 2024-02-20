#include <stdio.h>
#include <stdlib.h>
#define size 20
void Small(int x[], int Size, int* small, int* location);
int main()
{
    int array[size], small, location ;
    FILE* in = fopen("input.txt", "r");
    for(int i = 0 ; i < size ; i++)
        fscanf(in, "%d", &array[i]);
    Small(array, size, &small, &location);
    printf("The smallest number is: %d\nThe location : %d\n", small, location);
    fclose(in);
    return 0;
}

void Small(int x[], int Size, int* small, int* location)
{
    *small = x[0] ;
    *location = 1 ;
    for(int i = 1 ; i < Size ; i++)
        if(x[i] < *small)
        {
            *small = x[i];
            *location = i+1;
        }
}
