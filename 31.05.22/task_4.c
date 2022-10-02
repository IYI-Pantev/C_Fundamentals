// 4)
// Напишете програма на C, за да проверите дали даден низ е палиндром или не, без да
// използвате цикъл.

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100 

int main()
{
    char str[MAX_SIZE], reverse[MAX_SIZE];
    int flag;

    
    printf("Enter word to see if it's a palindrome: ");
    scanf("%s", str);


    strcpy(reverse, str); //Copies original string to reverse
    strrev(reverse);      //Finds the reverse of string

    flag = strcmp(str, reverse); 

   
    if(flag == 0)
    {
        printf("String is Palindrome.");
    }
    else
    {
        printf("String is Not Palindrome.");
    }

    return 0;
}