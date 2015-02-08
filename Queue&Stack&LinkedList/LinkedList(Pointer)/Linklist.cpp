/*
	Using linkedlist to add number to the data 
	Reducing times
*/
#include<stdio.h>
#include<stdlib.h>

/* 1.set up linkedlist */
struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node *p,*q;
	struct node *head;
	struct node *t;
	int i,n,a;
	printf("please input count of number\n");
	scanf("%d",&n);
	head = NULL;
	printf("input number,count=n\n");
	for(i=1;i<=n;i++)
	{
		/* 2.set up first node */
		scanf("%d",&a);
		/* 3.dynamic apply for a space to store a node*/
		p=(struct node *)malloc(sizeof(struct node));
		p->data=a;
		p->next=NULL;//p->data=NULL; error
		if(head==NULL)
			head=p;
		else
			q->next=p;//q is current node


		q=p;//after p will point to new node
	}
	
	/* 4.insert a number */
	printf("please input insered number\n");
	scanf("%d",&a);
	t=head;//very important
	while(t!=NULL)
	{
		if(t->next->data>a)
		{
			p=(struct node *)malloc(sizeof(struct node));

			p->data=a;
			p->next=t->next;
			t->next=p;
			break;
		}
				
		t=t->next;
	}



	t=head;
	while(t!=NULL)
	{
		printf("%d ",t->data);
		t=t->next;
	}

	getchar();getchar();
	return 0;

}

