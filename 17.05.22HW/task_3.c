// 3.
// Напишете програма , която принтира уникалните елементи от масив с цели числа ,
// въведени от клавиатурата . За целта , някои от числата трябва да се повтарят.

#include<stdio.h>
#include<stdbool.h>
#define SIZE 5
int main()
{   
    int arr[SIZE], i, k;
    bool uniqueNumber = true;

    printf("Enter 5 numbers:\n");
    for ( i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    for ( i = 0; i < SIZE; i++)
    {
        for ( k = 0; k < SIZE; k++)
        {
            if (i == k)
            
                continue;
            
            else if (arr[i]==arr[k])
            
                uniqueNumber = false;
            
            
            
        }
    if (uniqueNumber == true)
    {
        printf("Unique number = %d\n", arr[i]);
    }
    uniqueNumber = true;
        
    }
    
    
    return 0;

}