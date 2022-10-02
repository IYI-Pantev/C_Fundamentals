/*
Задача 5. Дефинирайте потребителски тип към масив. Инициализирайте
масива, изведете на конзолата.
*/

#include <stdio.h>

typedef int arr[5];

int main()
{
    arr myArr = {1,2,3,4,5};

    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", myArr[i]);
    }

    printf("\n");

    arr myArr2 = {6,7,8,9, 10};

    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", myArr2[i]);
    }
}