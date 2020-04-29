#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node 
{
	int data;
	struct node *next;
};

struct node *head=NULL;

void insert(int data)
{
	struct node *link=(struct node*)malloc(sizeof(struct node));
	link->data=data;
	link->next=head;
	head=link;
}
void print()
{   struct node *ptr=head;
printf("head->");
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("end");
}

	int size(struct node *head)
	{   struct node *ptr=head;
		int a=0;
		while(ptr!=NULL)
		{
			ptr=ptr->next;
			a++;
		}
		return a;
	}
	
	
void del(int pos)
	{   
		int s=size(head);
		struct node *ptr=head;
		struct node *pt1,*pt2;
	if(pos==1)
	{
		pt1=ptr->next;
		head=pt1;
	}
	
	else
	{
		int count=1;
		while(ptr!=NULL && (count<pos))
		{
			count++;
			pt1=ptr;
			ptr=ptr->next;
			pt2=ptr->next;
		}
		pt1->next=pt2;
		
	}
	
	}
	
int main()
	{
		insert(2);
		insert(3);
		insert(4);
		insert(5);
		insert(10);
		insert(78);
		insert(565);
	    print();
	    del(7);
	    printf("\n");

	    print();
	    return 1;
	}

