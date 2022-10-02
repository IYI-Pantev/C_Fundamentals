// 3)
// Напишете C програма за сравняване на два низа, използвайки цикъл символ по символ, без
// да използвате вградена библиотечна функция strcmp()

#include <stdio.h>


int compare(char[],char[]);  

int main()  
{  
   char str1[20]; 
   char str2[20]; 
   printf("Enter the first string : ");  
   scanf("%s",str1);  
   printf("Enter the second string : ");  
   scanf("%s",str2);  

   int isSame= compare(str1,str2); 

   if(isSame==0)
   printf("The two strings are same");  
   else  
   printf("strings are not same");  
  
    return 0;  
}  
  
//функция за сравнение
int compare(char a[],char b[])  
{  
    int flag=0, i=0;  
    while(a[i]!='\0' &&b[i]!='\0')  // итериране до '\0'
    {  
       if(a[i]!=b[i])  
       {  
           flag=1;  
           break;  
       }  
       i++;  
    }  
    if(flag==0)  
    return 0;  
    else  
    return 1;  
}  