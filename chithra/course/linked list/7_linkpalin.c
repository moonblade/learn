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


int n=0;
void print(struct node *h){
	struct node *temp = h;
	while(temp!=NULL)
	{
		n = n*10+temp->data;
		temp = temp->next;
	}
	printf("\n");
}

int palindrome(int n){
	int rem=0;
	int rev;
	int t = n;
	while(n>0){
		rem = n%10;
		rev=rev*10+rem;
		n/=10;
	}
	if(t==rev)
		return 1;
	return -1;
}

int main(int argc, char const *argv[])
{
	struct node *head = insert(1,NULL);
	insert(2,head);
	insert(3,head->next);
	insert(4,head->next->next);
	insert(5,head->next->next->next);
	insert(4,head->next->next->next->next);
	insert(3,head->next->next->next->next->next);
	insert(2,head->next->next->next->next->next->next);
	insert(1,head->next->next->next->next->next->next->next);
	print(head);
	printf("%d\n",palindrome(n) );
	return 0;
}