// 7)
// Напишете C програма за отрязване както на водещите, така и на крайните символи за
// празно пространство в низ с помощта на цикъл.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
  
// функция за махане на спейсовете в началото
char* removeLeadingSpaces(char* str)
{
    static char str1[99]; // създаване на нов стринг
    int count = 0, j, k;
  
    // итерира докато спрат спейсовете в началото на стринга
    while (str[count] == ' '|| str[count] == '\t') {
        count++;
    }
  
    
    for (j = count, k = 0; str[j] != '\0'; j++, k++) {
        str1[k] = str[j];
    }
    str1[k] = '\0'; // слагаме задължително терминираща нула
  
    return str1;
}

char *removeTrailingSpaces(char* str)
{
    int count, i;
    i = strlen(str)-1;
   while (str[i] == ' '|| str[i] == '\t')
   {
       if (i ==0)
       {
           break;
       }
       
      i--;
   }
   str[i+1]= '\0';
   return str;
   
    
}
  

int main()
{
    
    char str[] = "         codeAcademy   ";
    char* ptr;
    char* ptr2;
    char word[100];
  
  
    
    ptr = removeLeadingSpaces(str);
    strcpy(word, ptr);

    ptr2 = removeTrailingSpaces(word);

    
    printf("%s", ptr);
    
    printf("%s", ptr2);
    printf("i");
    //printf("%d", strlen(word));
    
    return 0;
}
