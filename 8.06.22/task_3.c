/*
10) Премахнете всички битове на число след n-тия
бит включително.
*/

#include <stdio.h>


int main()
{
    int number, index, i;
    int result;
    
    printf("Enter number:\n"); // 18 => 00010010
    scanf("%d", &number);
    result = number;

    printf("----------\n");

    printf("Enter from which index you would like to cut the bits:\n"); // 3
    scanf("%d", &index);

    printf("----------\n");

    
    for ( i = index; i < 9; i++)
    {
        result = result & ~(1<<i);
    }
    

    
    printf("The result is = %d", result); // 2 => 00000010


    return 0;
  
    
}