#include<stdio.h>

int main(){
    float weight;
    printf("Type your weight on Earth: ");
    scanf("%f", &weight);
    float moon_gravitation;
    moon_gravitation = weight*0.17;
    printf("Your moon weight is: %.2f kg.", moon_gravitation);
    return 0;
}
