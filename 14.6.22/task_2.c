/*
Задача 2. Направете едносвързан списък, съдържащ числата 1-14 и
принтирайте петия елемент от края му
*/

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{

	struct Node* new_node
		= (struct Node*)malloc(sizeof(struct Node));

	
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

int GetNth(struct Node* head, int index)
{

	struct Node* current = head;
	int count = 0;
	while (current != NULL) {
		if (count == index)
			return (current->data);
		count++;
		current = current->next;
	}
	assert(0);
}

int main()
{
	struct Node* head = NULL;

    for (int i = 1; i < 15; i++)
    {
        push(&head, i);
    }

    int index_s = 0;
    printf("Type the index you want to print from back: ");
    scanf("%d", &index_s);

	printf("Element at index %d  is %d", index_s, GetNth(head, index_s));
	getchar();
}