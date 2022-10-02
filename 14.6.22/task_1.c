/*
Задача
1. Реализация на списък . Напишете програма , която добавя и
изтрива елемент от списък по позиция в списъка .
*/

#include<stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void delete_position(struct node *head, int position) {
    struct node *current = head;
    struct node *previous = head;
    if(head == NULL)
        printf("List is already empty!");
    else if(position == 1)
    {
        head = current->link;
        free(current);
        current = NULL;
    }else {
        while (position != 1)
        {
            previous = current;
            current = current->link;
            position--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
        
    }

}


void add_at_pos(struct node *head, int data, int pos) {
    struct node *ptr = head;
    struct node *ptr2 = (struct node *)malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;

    pos--;
    while (pos != 1)
    {
        ptr = ptr->link;
        pos--;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
    
}

int main()
{   
    struct node *head = NULL;
    struct node *ptr;
    int position = 0;
    int data = 0;

    head = (struct node *)malloc(sizeof(struct node));
    
    head->data = 45;
    head->link = NULL;

    // node 2
    struct node *current = malloc(sizeof(struct node));
    current->data= 98;
    current->link = NULL;
    head->link = current;

    //node3
    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    head->link->link = current;   

    printf("Enter which node you would like to delete: "); // 2 (for example)
    scanf("%d", &position);

    delete_position(head, position);

    ptr = head;
    printf("---changed list---\n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
    printf("---------\n");
    printf("Enter in which position you would like to enter node: ");
    scanf("%d", &position); // 2 (for exmpl)

    printf("Enter the data of the new node: ");
    scanf("%d", &data);

    add_at_pos(head, data, position);
    ptr = head;

    printf("---changed list---\n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }




    return 0;

}