
// . Да се напише функция, която намира и връща лицето на
// правоъгълник.

#include<stdio.h>

int rectangleArea(int a, int b)
{

     return a*b;
}

int main()
{   int a, b;
    printf("enter side a:\n");
    scanf("%d",&a);
    printf("enter side b:\n");
     scanf("%d",&b);
    printf("The rectangle area is: %d", rectangleArea(a, b));
    return 0;

}