#include<stdio.h>
using namespace std;
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *head=NULL;
void insert(int data)
{
	struct node *block=new node();
	struct node *ptr=head;
//	block->data=data;
//	block->next=head-;
//	block->prev=NULL;
//	block->next=head;
//	head=block;
//head->prev=block;
//head->next=head;
//head=block;
printf("%d head\n",&head);

printf("%dblock\n",&block);
printf("%dhead->next\n",&head->next);
printf("%dhead->prev\n",&head->prev);
printf("%dblock->next\n",&block->next);
printf("%dblock->prev\n",&block->prev);
block->data=data;
block->next=head;
block->prev=NULL;
head->prev=block;
head=block;	

printf("%d  baddaadaad head\n",&head);

printf("%dblock\n",&block);
printf("%dhead->next\n",&head->next);
printf("%dhead->prev\n",&head->prev);
printf("%dblock->next\n",&block->next);
printf("%dblock->prev\n",&block->prev);

}
void print_lr()
{ 
struct node *ptr=head;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
		
	}
	printf("\n");
}
void print_rl()
{
	struct node *pt1;
	struct node *ptr=head;
	while(ptr!=NULL)
	{
		pt1=ptr;
		ptr=ptr->next;
	}
	while(pt1!=NULL)
	{
		printf("%d",pt1->data);
		pt1=pt1->prev;
	}
	printf("\n");

}
int main()
{
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	insert(60);
	insert(70);
//	print_lr();
//	print_rl();
	return 1;
}
