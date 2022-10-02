// 1)
// Напишете C програма за намиране на дължината на низ с помощта на цикъл, без да
// използвате вградена библиотечна функция strlen() .

#include <stdio.h>

int main(void)
{
    char text[15] = "CodeAcademy";
    int i=0, text_length=0;
    while (text[i] != '\0')
    {
        text_length++;
        i++;
    }
    
    printf("The string legth is = %d", text_length);
    return 0;
}