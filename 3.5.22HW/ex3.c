#include<stdio.h>


int main()
{
    float n; 
    printf("Number:\n");
    scanf("%f", &n);

    int result;
    result = 0;
    int counter = 0;
    for (float m = 1; m <= n; m++) 
    {
        for (float k = 1; k < n; k++)
        {
            if ((pow(m,2))+(pow(k,2)) == n)
            {
                printf("numbers are: %.2f^2 + %.2f^2 = %.2f\n", k, m, n);
                counter +=1;
            }   
        }
    }
    printf("%d", counter);
    return 0;
}