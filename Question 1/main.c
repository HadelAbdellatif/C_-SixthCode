#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int i;
   int temp;
   int A[9]={1,2,3,4,5,6,7,8,9};
   int B[9];
   printf("please inter nine values \n");
   for(i=0 ; i<9 ; i++)
   {
       scanf("%d",&B[i]);
   }
   for (i=0 ; i<9 ; i++)
   {
        temp = A[i];
        A[i] = B[i];
        B[i] = temp;
        printf("%d %d\n",A[i],B[i]);
   }
    return 0;
}
