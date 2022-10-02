/*
 6. Даден e масив от 5 положителни числа. Да се напишат две функции, които
намират минималната и максималната стойност, които могат да се
изчислят, като се сумират точно 4 от тези 5 числа.
● Програмата чете масива от тези 5 числа, извиква съответните функции и
отпечатва съответно minimum и maximum стойностите, всяка на нов ред.
arr = [1,3,5,7,9]
minimum sum is 1 + 3 + 5 + 7 = 16
maximum sum is 3 + 5 + 7 + 9 = 24.
5. отпечатва се 16 24 
*/
#include "..\include\fnc.h"
#include <stdio.h>

int main()
{
	int num_count = 0;
	printf("Enter count of num you want to add.- "); scanf("%d", &num_count);
	
	int num_arr[num_count];
	fillArray(num_arr, num_count);

	printf("%d\n", arrSum(num_arr, num_count) - maxInArr(num_arr, num_count)); //minimum value
	printf("%d\n", arrSum(num_arr, num_count) - minInArr(num_arr, num_count)); //maximum value
	return (0);
}

функции:
#include "..\include\fnc.h"
#include <stdio.h>
#include <stdlib.h>

void fillArray(int arr[], int arr_count){
    for(int i = 0; i < arr_count; i++){
		printf("Enter %d number- ", i+1);
		scanf("%d", &arr[i]);
    }
}

int arrSum(int arr[], int arr_count){
    int arr_sum = 0;
	for(int i = 0; i < arr_count; i++){
		arr_sum += arr[i];
	}	
    return arr_sum;
}

int minInArr(int arr[], int arr_count){
    int min_arr = arr[0];
	for(int i = 1; i < arr_count; i++){
		if(arr[i] < min_arr)
			min_arr = arr[i];
	}
    return min_arr;
}

int maxInArr(int arr[], int arr_count){
	int max_arr = arr[0]; 
	for(int i = 1; i < arr_count; i++){
		if(arr[i] > max_arr)
			max_arr = arr[i];
	}
    return max_arr;
}

хедър:
#ifndef FNC_H
#define FNC_H

void fillArray(int arr[], int arr_count);
int arrSum(int arr[], int arr_count);
int minInArr(int arr[], int arr_count);
int maxInArr(int arr[], int arr_count);

#endif