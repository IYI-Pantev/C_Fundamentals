/*
Задача 5. Напишете макрос с един параметър, който печата
съобщение, само при дефиниран макрос DEBUG. Ако DEBUG
не е дефиниран, не печата нищо
*/
#include <stdio.h>

#define SQUARE(x) (x)*(x)

int main()
{
    int num = 7;
    #ifdef DEBUG
    printf("%d\n", SQUARE(num));
    #endif

    #ifndef SomeMacro
    printf("%d\n", SQUARE(num));
    #endif



    return 0;
}