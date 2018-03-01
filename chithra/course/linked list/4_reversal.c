#include <stdio.h>
struct node{
	node *next;
	int data=0;
};
struct node *insert(int data, struct node *link){
	struct node *temp = new struct node;
	temp->data = data;
	temp->next = NULL;
	if(link ==NULL){
		link = temp;
	}
	else{
		link->next = temp;
	}
	return temp;

}

void print(struct node *h){
	struct node *temp = h;
	while(temp!=NULL)
	{
		printf("%d ",temp->data );
		temp = temp->next;
	}
	printf("\n");
}
struct node * reverse(struct node* head)
{
    struct node* prev   = NULL;
    struct node* current = head;
    struct node* next;
    while (current != NULL)
    {
        next  = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
    }
    return prev;
}

int main(int argc, char const *argv[])
{
	struct node *head = insert(1,NULL);
	insert(2,head);
	insert(3,head->next);
	insert(4,head->next->next);
	insert(5,head->next->next->next);
	insert(6,head->next->next->next->next);
	insert(7,head->next->next->next->next->next);
	insert(8,head->next->next->next->next->next->next);
	insert(9,head->next->next->next->next->next->next->next);
	insert(10,head->next->next->next->next->next->next->next->next);
	print(head);
	struct node *hrev = reverse(head);
	print(hrev);
	return 0;
}