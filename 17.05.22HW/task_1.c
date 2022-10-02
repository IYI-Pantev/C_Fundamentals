// 1.
// Прочетете масив от цели числа от клавиатурата
// Копирайте въведения масив във втори масив , като умножите стойността на
// всеки елемент по 2. Принтирайте двата масива.

#include<stdio.h>
#define SIZE 4
int main()
{   
    int arr[SIZE], arrDouble[SIZE],i;

    printf("Enter 4 numbers:\n");

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n");

    for ( i = 0; i < SIZE; i++)
    {
       arrDouble[i]  = (arr[i]*2);
        printf("%d\t", arr[i]);
        printf("%d\t", arrDouble[i]);
        printf("\n");
    }
    
      return 0;

}
