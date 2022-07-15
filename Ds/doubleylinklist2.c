#include <stdio.h>
#include <stdlib.h>
 

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
 

void insert_first(struct Node** head_ref, int new_data)
{
    
    struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
    temp->data = new_data;
    temp->next = (*head_ref);
    temp->prev = NULL;
 
    
    if ((*head_ref) != NULL)
        (*head_ref)->prev = temp;
       (*head_ref) = temp;
}
 
// void insert_last(struct Node* prev_node, int new_data)
// {
    // /*1. check if the given prev_node is NULL */
    // if (prev_node == NULL) {
        // printf("the given previous node cannot be NULL");
        // return;
    // }
 
    // /* 2. allocate new node */
    // struct Node* new_node
        // = (struct Node*)malloc(sizeof(struct Node));
 
    // /* 3. put in the data  */
    // new_node->data = new_data;
 
    // /* 4. Make next of new node as next of prev_node */
    // new_node->next = prev_node->next;
 
    // /* 5. Make the next of prev_node as new_node */
    // prev_node->next = new_node;
 
    // /* 6. Make prev_node as previous of new_node */
    // new_node->prev = prev_node;
 
    // /* 7. Change previous of new_node's next node */
    // if (new_node->next != NULL)
        // new_node->next->prev = new_node;
// }
 
// /* Given a reference (pointer to pointer) to the head
   // of a DLL and an int, appends a new node at the end  */
// void append(struct Node** head_ref, int new_data)
// {
    // /* 1. allocate node */
    // struct Node* new_node
        // = (struct Node*)malloc(sizeof(struct Node));
 
    // struct Node* last = *head_ref; /* used in step 5*/
 
    // /* 2. put in the data  */
    // new_node->data = new_data;
 
    // /* 3. This new node is going to be the last node, so
          // make next of it as NULL*/
    // new_node->next = NULL;
 
    // /* 4. If the Linked List is empty, then make the new
          // node as head */
    // if (*head_ref == NULL) {
        // new_node->prev = NULL;
        // *head_ref = new_node;
        // return;
    // }
 
    // /* 5. Else traverse till the last node */
    // while (last->next != NULL)
        // last = last->next;
 
    // /* 6. Change the next of last node */
    // last->next = new_node;
 
    // /* 7. Make last node as previous of new node */
    // new_node->prev = last;
 
    // return;
// }
 
// This function prints contents of linked list starting
// from the given node
void head_count()
{
	struct node*ptr;
	ptr=*head;
	while(ptr!=NULL)
	{
		printf("element: %d<->\n",ptr->data);
		ptr=ptr->next;
		
	}
	
}
 
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;
 
    // Insert 6.  So linked list becomes 6->NULL
   // append(&head, 6);
 
    // Insert 7 at the beginning. So linked list becomes
    // 7->6->NULL
    insert_first(&head, 7);
 
    // Insert 1 at the beginning. So linked list becomes
    // 1->7->6->NULL
    insert_first(&head, 1);
	insert_first(&head, 3);
 
    // Insert 4 at the end. So linked list becomes
    // 1->7->6->4->NULL
   // append(&head, 4);
 
    // Insert 8, after 7. So linked list becomes
    // 1->7->8->6->4->NULL
    //insert_last(head->next, 8);
 
    // printf("Created DLL is: ");
    head_count(head);
 
    getchar();
    return 0;
}