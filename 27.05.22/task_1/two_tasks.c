// Задача 2. Добавете към горния код функции за умножение и деление.
// след като се въведе оператор да се принтира резултатът от функция.

#include <stdio.h>
#include <stdlib.h>


int fnPlus(int nA, int nB) { return(nA + nB); }
int fnMinus(int nA, int nB) { return(nA - nB); }
int fnMult(int nA, int nB) {return(nA * nB); }
int fnDivide(int nA, int nB) {return(nA/nB);}

int ( * pfCalc ) ( int, int ) = NULL; // за switch и for loop решенията
int (*func_ptr[4])(int, int)={fnMinus, fnMinus, fnMult, fnDivide}; // за масива от поинтери

int main(){
    printf("enter operator:\n");
    printf("0 - add, 1 - subtract, 2 - mult, 3 - divide\n"); // за масива от поинтери

    int op;
    scanf("%d",&op);
    printf("enter two numbers:\n");
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",func_ptr[op](a,b));
    
    //  printf("enter operator:\n");  // за for loopa i switch решението
    // char op;
    // scanf("%c",&op);
    // printf("enter two numbers:\n");
    // int a, b;
    // scanf("%d",&a);
    // scanf("%d",&b);


    // с for loop
    // if(op=='+'){
    //     pfCalc =fnPlus(a,b);
    //     printf("%d", ( * pfCalc ) );
    // }
    
    // if (op = "*")
    // {
    //     pfCalc = fnMult(a,b);
    //     printf("%d", (* pfCalc));
    // }   



    // по-удобен вариант със switch
//     switch (op)
//     {
//     case '+':
//         pfCalc = fnPlus(a,b);
//         printf("%d", (* pfCalc));
//         break;
    
//     case '-':
//         pfCalc= fnMinus(a,b);
//         printf("%d", (* pfCalc));
//         break;
//     case '*':
//         pfCalc=fnMult(a,b);
//         printf("%d", (* pfCalc));
//         break;
//     case '/':
//         pfCalc=fnDivide(a,b);
//         printf("%d", (* pfCalc));
//         break;
//     }
}