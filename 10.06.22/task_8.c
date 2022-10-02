/*
Задача 8. Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и крайна
точка (15, 15). Запълнете пространството между тях с тирета.
*/


#include<stdio.h>
#include<stdlib.h>

struct point{
    int x;
    int y;
};

struct rectangle{
    int A;
    int B;
};

struct point *makeapoint(int x, int y);

int main()
{
    struct point *entrypoint = makeapoint(0, 0);
    struct point *endpoint = makeapoint(15, 15);

    for (size_t i = endpoint -> y; i < endpoint -> x; i++)
    {
        for (size_t j = endpoint -> y; j < endpoint -> y; i++){
            printf("-");
        printf("\n");
    }
    free (entrypoint);
    free(endpoint);
    return 0;
}
}
struct point *makeapoint(int x, int y){
    struct point *my_point = malloc(sizeof(struct point));
    my_point -> x = x;
    my_point -> y = y;

    return my_point;
}