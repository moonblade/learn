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

struct node *middle(struct node *h){
	struct node *slow = h;
	struct node *fast = h->next;
	while(fast && fast->next){
		slow= slow->next;
		fast = fast->next->next;
	}
	return slow;
}

int main(int argc, char const *argv[])
{
	struct node *head = insert(1,NULL);
	insert(2,head);
	insert(3,head->next);
	insert(4,head->next->next);
	insert(5,head->next->next->next);
	print(head);
	struct node *mid = middle(head);
	printf("%d\n",mid->data );
	return 0;
}