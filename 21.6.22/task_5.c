/*
5. Напишете функция, която по даден е масив от цели числа изчислява
процента на неговите елементи, които са положителни, които са отрицателни и
които са нула. Резултатът, който връща функцията да бъде масив от числа между 0
и 1, даващи пропорцията на всеки вид числа.
● Програмата чете масива от числа, извиква горната функция и отпечатва като резултат
процентите всеки на нов ред с 6 цифри след десетичната запетая.
Example :
4. arr = [1,1,0, -1,-1]
5.
There are n =5 elements, two positive, two negative and one zero. Their ratios are 2/5=0.400000 ,
2/5=0.400000 and 1/5 = 0.200000 . Results are printed as:
6. 0.400000
7. 0.400000
8. 0.200000
*/
#include "..\include\fnc.h"
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter number count: "); 
	scanf("%d", &n);
	int arr = (int)malloc(sizeof(int)*n);
	fillArr(arr, n);	

	double *result = countInprc(arr, n);
	printPoint(result, n);
	free(arr);
	return (0);
}

функцията:
#include "..\include\fnc.h"
#include<stdio.h>
#include<stdlib.h>

void fillArr(int *arr, int n){
    int num = 0;
	for(int i = 0; i < n; i++){
		printf("Enter %d number- ", i+1);
		scanf("%d", &num);
		*(arr+i) = num;
	}
}
 
double *countInprc(int *arr , int n){
    int countOfZero = 0;
    int countOfPositive = 0;
    int countOfNegative = 0;
    
    for(int i = 0 ; i < n ;i++){
        if((arr+i)==0){
            countOfZero++;
        }else if((arr+i)>0){
            countOfPositive++;
        }else{
            countOfNegative++;
        }
    }

    double countOfZeroPercent = countOfPositive/(double)n;
    double countOfPositivePercent = countOfNegative/(double)n;
    double countOfNegativePercent =  countOfZero/(double)n;

    printf("There are n = %d elements, %d positive, %d negative and %d zero.Their ratios are %d/%d = %lf, %d/%d = %lf and %d/%d = %lf."
           "Results are printed as:\n", n, countOfPositive, countOfNegative, countOfZero, countOfPositive, n, countOfZeroPercent,
            countOfNegative, n, countOfPositivePercent, countOfZero, n, countOfNegativePercent);
            
    double result = (double)malloc(sizeof(double)*3);
    *result = countOfZeroPercent;
    *(result+1) = countOfPositivePercent;
    *(result+2) = countOfNegativePercent;

	return result;
    free(result);
}

void printPoint(double *arr, int n){
	for(int i = 0; i < n; i++){
		printf("%lf\n", arr[i]);
	}
}

хедър:
#ifndef FNC_H
#define FNC_H

void fillArr(int *arr, int n);
double *countInprc(int *arr , int n);
void printPoint(double *arr, int n);

#endif