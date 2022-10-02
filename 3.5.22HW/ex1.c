#include<stdio.h>
#include<math.h>

int main(){
    float pr_sum, percent, time, amount, interest;

    
    printf("Please, enter Principle:\n");
    scanf("%f", &pr_sum);
    printf("Please enter Rate of Interest:\n");
    scanf("%f", &percent);
    printf("Please, enter the time you want:\n");
    scanf("%f", &time);

    //calculate the Amount
    amount = pr_sum * pow((1 + percent/100), time);

    //calculate the Interest
    interest = amount - pr_sum;

    printf("---------------------------\n");
    
    printf("After %.1f years\n", time);
    printf("Total amount = %.2f\n", amount);
    printf("Compound interest earned = %.2f\n", pr_sum);

    return 0;
}