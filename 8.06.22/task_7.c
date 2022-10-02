/*Задача 10. Напишете макрос, който прави идентификатор на
низ (стринг)*/

#include<stdio.h>

#define toStr(x) #x

int main()
{   
    printf("%s\n", toStr(7/3));
    
    return 0;

}