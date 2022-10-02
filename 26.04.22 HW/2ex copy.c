#include <stdio.h>

int main(){
    
    float ounces_ordered;
    printf("How many ounces would you like? ");
    scanf("%f",&ounces_ordered);
    float glass;
    glass = ounces_ordered/8;

    printf("You have ordered: %.3f glass/es.", glass);
    return 0;
}

