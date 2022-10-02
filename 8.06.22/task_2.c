/*
9) Направете нa нула битовете в числа, намиращи се на
позиции между 3 и 7. (0b00000111 ?)
*/

#include <stdio.h>

int main()
{
    int mask = 0b00000111; // binary of 7
    
    int five = 0b00000101; // binary of five 
    printf("five = %d\n", five);
    printf("---------------\n");

    int result = five | mask;
    
    printf("five | mask = %d\n", result);

    




    return 0;
}