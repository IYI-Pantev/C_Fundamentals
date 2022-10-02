// Задача 3. Напишете програма, която калкулира разликата на
// два времеви периода, изразени във векове, години, месеци, дни,
// минути, секудни. Принтирайте изходните периоди и резултата.


#include <stdio.h>
#include <stdlib.h>

struct difference{
	unsigned int centuries;
	unsigned int years;
	unsigned int months;
	unsigned long days;
	unsigned long long hours;
	unsigned long long minutes;
	unsigned long long seconds;
} year_difference;


int calNum(int year)
{
	return (year / 4) - (year / 100) + (year / 400);
}
// Function to calculate the number
// of leap years in given range

int leapNum(int r, int l)
{
	l--;
	int num1 = calNum(r);
	int num2 = calNum(l);
	return num2 - num1;
}

int main(){
	unsigned int year_1 = 0;
	unsigned int year_2 = 0;
	unsigned int diff = 0;
	int leap_day_counter = 0;

	printf("Please enter year 1 and year 2 to calculate the difference between them:\n");
	scanf("%d",&year_1);
	scanf("%d",&year_2);

	if (year_1 > year_2){
		diff = year_1 - year_2;
		leap_day_counter = leapNum(year_1, year_2);
	}
	else if (year_1 < year_2) {
		diff = year_2 - year_1;
		leap_day_counter = leapNum(year_1, year_2);
	}
	else{
		printf("The entered years are exactly the same.");
		exit(0);
	}



	year_difference.centuries = diff / 100;
	year_difference.years = diff;
	year_difference.months = year_difference.years * 12;
	year_difference.days = (year_difference.months * 365) + leap_day_counter;
	year_difference.hours = year_difference.days * 24;
	year_difference.minutes = year_difference.hours * 60;
	year_difference.seconds = year_difference.minutes * 60;

	printf("Difference between year %d and year %d is:\n", year_1, year_2);
	printf("OR\n");
	printf("Centuries: %ld\n", year_difference.centuries);
	printf("OR\n");
	printf("Years: %ld\n", year_difference.years);
	printf("OR\n");
	printf("Months: %ld\n", year_difference.months);
	printf("OR\n");
	printf("Days: %llu\n", year_difference.days);
	printf("OR\n");
	printf("Hours: %llu\n", year_difference.hours);
	printf("OR\n");
	printf("Minutes: %llu\n", year_difference.minutes);
	printf("OR\n");
	printf("Seconds: %llu\n", year_difference.seconds);
	printf("AND\n");
	printf("Leap Years: %d\n", leap_day_counter);
	
	
	return 0;
}