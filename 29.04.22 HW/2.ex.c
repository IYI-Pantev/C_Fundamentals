#include<stdio.h>
int main()
{
int needed_num;
do{
    printf("Type your num here:\n");
    scanf("%d", &needed_num);
} 

while (needed_num < 100000 || needed_num>999999);
printf("Correct number!");

int last_n = needed_num % 10;
int fifth_n = (needed_num/10)%10;
int fourth_n = (needed_num/100)%10; 
int third_n = (needed_num/1000)%10; 
int second_n = (needed_num/10000)%10;
int first_n = (needed_num/100000)%10;

int evens;
int odds;

    if (last_n%2 == 0){
        evens += last_n;
    }
    else{
        odds += last_n;
    }
    if (fifth_n%2== 0){
        evens += fifth_n;
    }
    else{
        odds += fifth_n;
    }
    if (fourth_n%2==0){
        evens += fourth_n;
    }
    else{
        odds += fourth_n;
    }
    if (third_n%2==0){
        evens += third_n;
    }
    else{
        odds += third_n;
    }
    if (second_n%2==0){
        evens += second_n;
    }
    else{
        odds += second_n;
    }
    if (first_n%2==0){
        evens += first_n;
    }
    else{
        odds += first_n;
    }

    int area;
    area = evens * odds;
    printf("The area is: %d", area);

}


