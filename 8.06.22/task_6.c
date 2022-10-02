/*Задача 9. Напишете макрос, който свързва два
идентификатора в един общ (конкатениране на
идентификатори)*/

#include<stdio.h>

#define CONCAT(x, y) x##y

int main()
{   
    int CONCAT(x, y);
    xy = 13;
    printf("%d\n", xy);
    
    return 0;

}