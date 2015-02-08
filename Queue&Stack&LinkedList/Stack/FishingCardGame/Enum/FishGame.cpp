#include<stdio.h>

struct queue
{
	int data[1000];
	int head,tail;
};

struct stack
{
	int data[10];
	int top;
};

int main()
{
	struct queue q1,q2;
	struct stack s;
	int i,t,flag;

	//initial q1,q2
	q1.head=1;q1.tail=1;
	q2.head=1;q2.tail=1;

	//initial s
	s.top=0;

	//input q1's and q2's data

	for(i=1;i<=6;i++)
	{
		scanf("%d",&q1.data[q1.tail]);
			q1.tail++;
	}
	for(i=1;i<=6;i++)
	{
		scanf("%d",&q2.data[q2.tail]);
			q2.tail++;
	}

	

	//simulation of game
	//compare q1 with stack
	while(q1.head<q1.tail&&q2.head<q2.tail)
	{
		//let q1 first
		t=q1.data[q1.head];

		flag=0;
		for(i=1;i<=s.top;i++)
		{
			if(t==s.data[i]){flag=1;break;}
		}
		if(flag==0)
		{
			q1.head++;
			s.top++;
			s.data[s.top]=t;
		}
		if(flag==1)
		{
			q1.head++;
			q1.data[q1.tail]=t;
			q1.tail++;
			s.top--;
			while(s.data[s.top]!=t)
			{
				q1.data[q1.tail]=s.data[s.top];
				q1.tail++;
				s.top--;
			}
		}

		//let q2 after q1
		t=q2.data[q2.head];
		flag=0;
		for(i=1;i<=s.top;i++)
		{
			if(t==s.data[i]){flag=1;break;}
		}
		if(flag==0)
		{
			q2.head++;
			s.top++;
			s.data[s.top]=t;
		}
		if(flag==1)
		{
			q2.head++;
			q2.data[q2.tail]=t;
			q2.tail++;
			s.top--;
			while(s.data[s.top]!=t)
			{
				q2.data[q2.tail]=s.data[s.top];
				q2.tail++;
				s.top--;
			}
		}
	}

	if(q2.head==q2.tail)
	{
		printf("A WIN GAME\n");
		printf("card in A is");
		for(i=q1.head;i<=q1.tail-1;i++)
			printf(" %d",q1.data[i]);
		if(s.top>0)
		{
			printf("card in desk is");
			for(i=s.top;i>=1;i--)
				printf(" %d",s.data[i]);
		}
		else
		{
			printf("No card in desk!");
		}

	}
	
	else
	{
		printf("B WIN GAME\n");
		printf("card in B is");
		for(i=q2.head;i<=q2.tail-1;i++)
			printf(" %d",q2.data[i]);
		if(s.top>0)
		{
			printf("card in desk is");
			for(i=s.top;i>=1;i--)
				printf(" %d",s.data[i]);
		}
		else
		{
			printf("No card in desk!");
		}
	}
	
	getchar();getchar();
	return 0;

}


