// 4.
// Напишете програма , която да брои колко пъти се среща едно число в даден масив
// от цели числа . Масивът трябва да бъде въведен от клавиатурата. Принтирайте
// резултатите


// #include<stdio.h>

// #define SIZE 5
// int main()
// {   
//     int arr[SIZE], frequency[SIZE], i, k, counter=1;
    

//     printf("Enter 5 numbers:\n");
//     for ( i = 0; i < SIZE; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for ( i = 0; i < SIZE; i++)
//     {
//         for ( k = 0; k < SIZE; k++)
//         {
//             if (i == k)
            
//                 continue;
            
//             else if (arr[i]==arr[k])
//                 counter++;        
            
//         }
//         frequency[i]=counter;
//         counter = 1;
     
//     }
//     for ( i = 0; i < SIZE; i++)
//     {
//         printf("%d\n", frequency[i]);
//     }
    
    
    
//     return 0;

// }


#include <stdio.h>    
     
int main()    
{    
    //Initialize array     
    int arr[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};     
        
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    //Array fr will store frequencies of element    
    int fr[length];    
    int visited = -1;    
        
    for(int i = 0; i < length; i++){    
        int count = 1;    
        for(int j = i+1; j < length; j++){    
            if(arr[i] == arr[j]){    
                count++;    
                //To avoid counting same element again    
                fr[j] = visited;    
            }    
        }    
        if(fr[i] != visited)    
            fr[i] = count;    
    }    
        
    //Displays the frequency of each element present in array    
    printf("---------------------\n");    
    printf(" Element | Frequency\n");    
    printf("---------------------\n");    
    for(int i = 0; i < length; i++){    
        if(fr[i] != visited){    
            printf("    %d", arr[i]);    
            printf("    |  ");    
            printf("  %d\n", fr[i]);    
        }    
    }    
    printf("---------------------\n");    
    return 0;    
}    