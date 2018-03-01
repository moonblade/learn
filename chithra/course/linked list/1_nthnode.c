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

struct node *nthNode(int n,struct node *h){
	struct node *temp = h;
	int count = 0;
	while(temp!=NULL){
		temp = temp->next;
		count++;
	}
	temp = h;
	int p = count-n;
	while(--p>0){
		temp = temp->next;
	}
	return temp;
	
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
	struct node *temp = nthNode(4,head);
	printf("%d\n",temp->data );
	return 0;
}