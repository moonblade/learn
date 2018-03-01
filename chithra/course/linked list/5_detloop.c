/*Algorithm to detect loop in linked list*/

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

int detectLoop(struct node *h){
	struct node *slow = h;
	struct node *fast = h->next;
	while(slow&&fast&&fast->next){
		slow = slow->next;
		fast = fast->next->next;
		if(slow==fast)
			return 1;
	}

}

void print(struct node *h){
	struct node *temp = h->next;
	while(temp!=h)
	{
		printf("%d ",temp->data );
		temp = temp->next;
	}
	printf("\n");
}


int main(int argc, char const *argv[])
{
	struct node *head = insert(1,NULL);
	insert(2,head);
	insert(3,head->next);
	insert(4,head->next->next);
	insert(5,head->next->next->next);
	insert(6,head->next->next->next->next);
	head->next->next->next->next->next ->next = head->next;
	int p = detectLoop(head);
	printf("%d ",p);
	return 0;
}