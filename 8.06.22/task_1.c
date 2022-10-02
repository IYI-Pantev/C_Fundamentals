/*
8р*) Намерете: позицията на най-старшия бит,
който е със стойност 1 в дадено число.
*/

#include <stdio.h>

int highBit(int num);

int main()
{
    int number;
    int result;
    
    printf("Enter number:\n");
    scanf("%d", &number);

    printf("----------\n");
    
    

    result = highBit(number);
    printf("The highest position with number 1 is = %d", result);


    return 0;
}

int highBit(int num)
{
    int highest_one_position = 0;
    for (int i = 0; i < 9; i++)
    {
        if (num & (1<<i))
        {
            highest_one_position = i;
        }
        
    }
    return highest_one_position;
  
    
}