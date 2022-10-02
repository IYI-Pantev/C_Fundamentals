#include <stdio.h>
// Напишете C програма за броене на честотата на цифрите в дадено число.
int main()
{
    long int number, n;
    int lastDigit = 0;
    int zeroCounter = 0;
    int oneCounter = 0;
    int twoCounter = 0;
    int threeCounter = 0;
    int fourCounter = 0;
    int fiveCounter = 0;
    int sixCounter = 0;
    int sevenCounter = 0;
    int eightCounter = 0;
    int nineCounter = 0;
    
    printf("Enter a number: ");
    scanf("%ld", &number);
    n=number;

    while (n!=0)
    {
        lastDigit = n % 10;
        if (lastDigit==0)
        {
            zeroCounter+=1;
        }
        else if (lastDigit==1)
        {
            oneCounter+=1;
        }
        else if (lastDigit==2)
        {
            twoCounter+=1;
        }
        else if (lastDigit==3)
        {
            threeCounter+=1;
        }
        else if (lastDigit==4)
        {
            fourCounter+=1;
        }
        else if (lastDigit==5)
        {
            fiveCounter+=1;
        }
        else if (lastDigit==6)
        {
            sixCounter+=1;
        }
        else if (lastDigit==7)
        {
            sevenCounter+=1;
        }
        else if (lastDigit==8)
        {
            eightCounter+=1;
        }
        else if (lastDigit==9)
        {
            nineCounter+=1;
        }

        n/=10;
            
    }
    // Frequency of 0 = 1
    printf("Frequency of 0 = %d\n", zeroCounter);
    printf("Frequency of 1 = %d\n", oneCounter);
    printf("Frequency of 2 = %d\n", twoCounter);
    printf("Frequency of 3 = %d\n", threeCounter);
    printf("Frequency of 4 = %d\n", fourCounter);
    printf("Frequency of 5 = %d\n", fiveCounter);
    printf("Frequency of 6 = %d\n", sixCounter);
    printf("Frequency of 7 = %d\n", sevenCounter);
    printf("Frequency of 8 = %d\n", eightCounter);
    printf("Frequency of 9 = %d\n", nineCounter);
    
    return 0;
}