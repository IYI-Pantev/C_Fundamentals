/*
Дефинирайте структура като потребителски тип. Инициализирайте
членовете на структ, използвайки потрб тип.
Отпечатайте
*/

#include<stdio.h>
#include<stdio.h>

typedef struct 
{
    char paint[20];
    int engineHP;
}chesna;

int main()
{   
    chesna my;
    printf("Enter plane paint:\n");
    scanf("%s", &my.paint);

    printf("Your chosen paint is = %s\n", my.paint);
    return 0;

}