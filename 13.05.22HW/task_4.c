// . Да се напише функция, която намира и отпечатва лицето на
// кръг

#include<stdio.h>
#include<math.h>

double circleArea(float radius)
{
    double area = M_PI * pow(radius, 2);
    return area;
}

int main()
{   
    float num;
    printf("Enter the radius:\n");
    scanf("%f",&num);

    printf("The area of the circle is %lf", circleArea(num));
    return 0;

}