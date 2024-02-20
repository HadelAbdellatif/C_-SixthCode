#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void multiply(int [][5],int [][5],int [][5]);
int main()
{
    int i,j,k;
    int a[5][5]= {{1,2,3,1,2},{0,1,4,7,8},{0,8,5,2,3},{1,2,5,8,7},{4,5,6,9,8}};
    int b[5][5]= {{4,5,4,7,8},{4,7,5,8,6},{2,0,3,2,1},{1,0,4,7,8},{1,2,0,6,4}};
    int c[5][5];
    multiply(a,b,c);
    for( i=0 ; i<5 ; i++)
    {
        for( j=0 ; j<5 ; j++)
        {
            printf("%d    \t",c[i][j]);
        }

        printf("\n");

    }

    return 0;
}

void multiply(int a[][5],int b[][5],int c[][5])
{


    int i,j;
    int k;

    for(i=0 ; i<5 ; i++)
    {
        for( j=0 ; j<5 ; j++)
        {
            c[i][j]=0;

            for(k=0 ; k<5 ; k++)
            {

                c[i][j]+= (a[i][k] * b[k][j]);
            }
        }




    }
}



