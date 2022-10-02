/*
2.- (преговор често използвани функции) Напишете следните функции:
● Функция, която проверявя дали едно число е просто
● Функция, която връща най-големия общ делител на две числа
● Функция, която използва горната функция и по даден като параметър
масив от цели числа, връща НОД на елементите от масива
*/

#include<stdio.h>  

void is_Prime(int n){
    int i,m=0,flag=0;    

    m=n/2;    
    for(i=2;i<=m;i++)    
    {    
    if(n%i==0)    
    {    
    printf("Number is not prime");    
    flag=1;    
    break;    
    }    
    }    
    if(flag==0)    
    printf("Number is prime");     

    printf("\n");
}


void find_GCD(int num1, int num2)
{
    int gcd, remainder, numerator, denominator; 
    
    
    if (num1 > num2) 
    { 
    numerator = num1; 
    denominator = num2; 
    } 
    else 
    { 
    numerator = num2; 
    denominator = num1; 
    } 
    
    // Finding GCD 
    remainder = numerator % denominator; 
    while (remainder != 0) 
    { 
    numerator = denominator; 
    denominator = remainder; 
    remainder = numerator % denominator; 
    } 
    gcd = denominator; 
    
    printf("GCD of %d and %d = %d\n", num1, num2, gcd); 
    printf("\n");
}

int main(){    

    int a = 67, b = 15, c = 18;

    is_Prime(a);

    find_GCD(b, c);

    return 0;  
}    