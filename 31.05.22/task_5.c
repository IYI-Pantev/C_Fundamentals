/*
5. Напишете C програма за намиране на символа с най-висока 
честота в низ с помощта на
цикъл. 
*/
 
#include <stdio.h>
int main() {
    char str[100];
    char ch;
    int count = 0;
 
    printf("Enter a string: ");
    scanf("%s", str);
 
    printf("Enter a character to find its frequency: ");
    scanf("%c", ch);
 
    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }
 
    printf("\nFrequency of %c = %d", ch, count);
    return 0;
}