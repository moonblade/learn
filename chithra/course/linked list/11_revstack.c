/*Reverse the Stack*/

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

struct node *reverse(struct node *h){
	struct node *cur = h;
	struct node *next;
	struct node *prev = NULL;
	while(cur!=NULL){
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	return prev;
}

int main(int argc, char const *argv[])
{
	push(1);
	push(2);
	push(3);
	push(4);
	print(head);
	struct node *hrev = reverse(head);
	print(hrev);
	return 0;
}