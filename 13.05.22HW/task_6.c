// . Функция, която по зададени граници на интервал [a,b] , намира и
// извежда сумата от четните числа от този интервал.

#include<stdio.h>

long int evenSum(int a, int b){
    long int sum;
    for (int i =a ;  i<= b; i++)
    {
        if (i % 2 == 0)
        {
            sum +=i;
        }
        
    }
    return sum;
    
}

int main()
{   
    int a, b;
    printf("enter a:\n");
    scanf("%d",&a);
    printf("enter b:\n");
    scanf("%d",&b);

    printf("the even sum of the range is %ld", evenSum(a,b));
    return 0;

}