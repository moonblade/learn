/*Stack*/

#include <stdio.h>
#define MAXSIZE 5
struct node{

	struct node *next;
	int data;
	// int top = -1;
};
struct node *head = NULL;
void push(int data){
	struct node *temp = new struct node;
	temp->data = data;
	temp->next = NULL;
	if(head==NULL){
		head = temp;
	}
	else{
		temp->next = head;
		head = temp;
	}
}

void pop(){
	if(head==NULL){
		printf("Nothig to pop\n");
	}
	else{
		struct node *t = head;
		head = t->next;
		printf("Popped element: %d\n",t->data);
		delete(t);
	}
}
void print(struct node *h){
	struct node *temp = h;
	while(temp!=NULL){
		printf("%d ",temp->data );
		temp = temp->next;
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	pop();
	push(1);
	print(head);
	pop();
	push(2);
	print(head);
	push(3);
	print(head);
	return 0;
}