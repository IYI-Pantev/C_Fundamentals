#include<stdio.h>
int main()
{
int six_num; // 123456
do{
printf("Six digit num: ");
scanf("%d", &six_num);
}

while (six_num<100000 || six_num>999999);

// separate the number:
int last_n = six_num%10; // 6 
int fifth_n = (six_num/10)%10; // 5
int fourth_n = (six_num/100)%10; // 4
int third_n = (six_num/1000)%10; //3
int second_n = (six_num/10000)%10; //2
int first_n = (six_num/100000)%10; // 1

// creating year with 1,3,5,6 
int year = (first_n*1000)+ (third_n*100) + (fifth_n*10) + last_n;
printf("The new year is: %d\n", year);

    if(year%4 == 0) {
        printf("This year %d is leap.", year);
    }
    else {
        printf("This year %d is not leap.", year);
    }
}

