// Напишете програма, която събира две матрици (4х4) и записва
// резултата в трета такава със същия размер. Събирането на матриците става като
// намерим сумата на съответстващите елементи в тях. Данните за изходните матрици
// трябва да бъдат въведени от потребителя. Разпечатайте трите матрици в конзолата.

#include<stdio.h>

int main()
{
    int mat1[4][4], mat2[4][4], mat3[4][4],i, j;
    printf("Enter 4*4 matrix 1 elements :");

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            scanf("%d",&mat1[i][j]);
    }
    printf("Enter 4*4 matrix 2 elements :");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            scanf("%d",&mat2[i][j]);
    }
    // Adding
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            mat3[i][j]=mat1[i][j]+mat2[i][j];
    }
    //print the new matrix
    printf("\nHere is the new matrix:\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            printf("%d ",mat3[i][j]);
        printf("\n");
    }
    return 0;
}