#include <stdio.h>

// // Да се състави програма на C, която при въвеждане на естествено число от интервала
// [10 30000] извежда цифрите му в морзовата азбука.
// Цифрите на числото се извеждат отдясно
// наляво
// Входни данни: х
// естествено число.
// Цифрите в морзовата абука се изписват както следва:
// За целта използвайте цикъл и оператор switch
int main()
{
    long int num,n;
    int lastDigit=0;   
    
   do
   {
       printf("Enter a number:\n");
        scanf("%ld", &num);
        
        
   } while (num<10 || num>30000);

   n=num;

   while (n!=0)
   {
       lastDigit = n % 10;
       switch (lastDigit)
       {
       case 0:
           printf("-----\n");
           break;
       case 1:
           printf("....\n");
           break;
        case 2:
           printf("...-\n");
           break;
        case 3:
           printf("..--\n");
           break;
        case 4:
           printf("..---\n");
           break;
        case 5:
           printf("----\n");
           break;
        case 6:
           printf("-...\n");
           break;
        case 7:
           printf("--..\n");
           break;
        case 8:
           printf("---..\n");
           break;
        case 9:
           printf("----.\n");
           break;  
       }
       n/=10;
   }
     
    
    return 0;
}