/* 22. Задача Домашно 
 Дадено е наредено тесте карти. 
 Наредбата по тежест на карта е: 
 2,3,4,5,6,7,8,9,10, Вале, Дама, Поп, Асо. 
 Наредбата по цвят на картите е: 
 трефа, каро, купа, пика. 
 Да се създаде програма на C, чрез която се въвежда N естествено число от интервала 
 [1..51] и се извеждат въведения номер карта и останалите по-големи карти от тестето. 
 Използвайте вложен цикъл. 
 Пример: 
 47 
 Изход: 
 Поп купа, Поп пика, Асо трефа, Асо каро, Асо купа, Асо пика */ 
  
 #include <stdio.h> 
  
 int main() 
 { 
     int num = 0; 
  
     do 
  
     { 
         printf("Enter number between 1 and 52\n"); 
         scanf("%d", &num); 
  
         char array[][52] = {"2 clubs,", "2 diamonds,", "2 hearts,", "2 spades,", 
                             "3 clubs,", "3 diamonds,", "3 hearts,", "3 spades,", 
                             "4 clubs,", "4 diamonds,", "4 hearts,", "4 spades,", 
                             "5 clubs,", "5 diamonds,", "5 hearts,", "5 spades,", 
                             "6 clubs,", "6 diamonds,", "6 hearts,", "6 spades,", 
                             "7 clubs,", "7 diamonds,", "7 hearts,", "7 spades,", 
                             "8 clubs,", "8 diamonds,", "8 hearts,", "8 spades,", 
                             "9 clubs,", "9 diamonds,", "9 hearts,", "9 spades,", 
                             "10 clubs,", "10 diamonds,", "10 hearts,", "10 spades,", 
                             "J clubs,", "J diamonds,", "J hearts,", "J spades,", 
                             "Q clubs,", "Q diamonds,", "Q hearts,", "Q spades,", 
                             "K clubs,", "K diamonds,", "K hearts,", "K spades,", 
                             "A clubs,", "A diamonds,", "A hearts,", "A spades"}; 
  
         for (int i = num - 1; i < 52; i++) 
             printf("%s ", array[i]); 
  
     } while (num < 1 || num > 52); 
 }