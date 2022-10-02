#include <stdio.h>

int main()
{
    float earth_days;
    printf("Enter earth days here: ");
    scanf("%f", &earth_days);
    float jupiter_years;
    jupiter_years = (earth_days / 365) / 12;
    printf("that makes %f jupiter years", jupiter_years);



    return 0;
}