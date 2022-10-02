//2)
// Напишете C програма за свързване на два низа в един низ, без да използвате библиотечна
// функция strcat().

#include <stdio.h>
int main()
{
   char str1[50], str2[50], i, j;
   printf("\nEnter first string: "); //Code
   scanf("%s",str1);
   printf("\nEnter second string: ");//Academy
   scanf("%s",str2);
   
   // цикъл който да достигне дължината на елементите на първия стринг до терминиращата нула

   for(i=0; str1[i]!='\0'; ++i); 
 
   // втория цикъл конткатенира стр2 към стр1

   for(j=0; str2[j]!='\0'; ++j, ++i)
   {
      str1[i]=str2[j];
   }
   // задължително добавяме '\0' в края на стринга
   str1[i]='\0';
   printf("\nThe concatenated string is: %s",str1);
   
   return 0;
}