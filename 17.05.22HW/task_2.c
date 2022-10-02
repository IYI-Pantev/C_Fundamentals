// 2.
// Напишете програма , която запълва масив от 20 елемента с произволно избрани
// цели числа . За целта използвайте функцията rand().
// Въведете едно цяло число от клавиатурата . Проверете дали въведеното число
// от клавиатурата е намерено в масива . Принтирайте масива и отговора дали
// числото е намерено в масива .

#include<stdio.h>
#include<stdbool.h>
#define SIZE 20
int main()
{   
    int arr[SIZE], i, num, counter=0, position=0;
    bool isThere = false;

    printf("enter you lucky number: ");
    scanf("%d", &num);

    for ( i = 0; i < SIZE; i++)
    {
        arr[i] = rand();
        if (num == arr[i])
        {
            isThere = true;
            position=counter+1;
        }
        counter++;
        printf("%d\t", arr[i]);    
    }

    printf("\n");

    if (isThere==true)
    {
        printf("You are lucky! You number %d is at %d position", num, position);
    }
    else
    {
        printf("Your number is not in the array, tray again.");
    }
    

    


    return 0;

}