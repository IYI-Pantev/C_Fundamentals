#include<stdio.h>
#include<math.h>

int main()
{
    float a,b, result;
    int N;
    do
    {
        
        printf("a:\n");
        scanf("%f", &a);
        printf("b:\n");
        scanf("%f", &b);

         
        printf("N:\n");
        scanf("%d", &N);
        
    } while (b==0 && 1>=N >=100);
    result = a/b;
    printf("%.*f", N, result);
}