/*starting node of the loop in ll
*/
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

struct node * startOfLoop(struct node *h){
	struct node *slow = h;
	struct node *fast = h->next;
	while(slow&&fast&&fast->next){
		slow = slow->next;
		fast = fast->next->next;
		if(slow==fast)
			return fast->next;
	}

}

void print(struct node *h){
	struct node *temp1 = h;
	struct node *temp2 = h->next;

	while(temp1!=temp2)
	{
		printf("%d ",temp1->data );
		temp1 = temp1->next;
		temp2 = temp2->next->next;
	}
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
	struct node * p = startOfLoop(head);
	printf("%d\n",p->data);
	return 0;
}