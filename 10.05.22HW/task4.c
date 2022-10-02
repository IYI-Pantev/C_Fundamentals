#include<stdio.h>
// 23. Задача
// Домашно
// Да се състави програма на C, чрез която се
// въвеждат естествени числа от интервала
// [1..50].
// Програмата да
// преустановява работата си при въвеждане на 2 последователни числа,
// които са равни.
// Програмата да
// извежда
// броя на въведените числа и тяхната средна стойност.

int main(){
  
  int num, previousNum=0, counterNum=0, sum=0, average;
 

  do
  {
      printf("Enter number between 1 and 50\n");
      scanf("%d", &num);
      counterNum++;
      sum+=num;
      
      if(previousNum==num)
      {
          break;
      }
      previousNum = num;

  } while (num>=1 || num<=50);
  
    average=sum/counterNum;
    printf("брой на числата - %d\n", counterNum);
    printf("средна стойност - %d", average);




    return 0;
}