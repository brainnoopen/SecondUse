/* simulation linked list */
#include<stdio.h>

int main()
{
	//1.array "right" used to record the next number of every number
	int data[50],right[50];
	int i,n,t,len;
	//2.input number
	printf("please input count of number\n");
	scanf("%d",&n);
	printf("input number,count=n\n");
	for(i=1;i<=n;i++)
		scanf("%d",&data[i]);
	len=n;
	//3.initial "right" array
	for(i=1;i<=n;i++)
	{
		if(i!=n)
			right[i]=i+1;
		else 
			right[i]=0;
	}
	
	//4.insert numbe
	len++;
	printf("please input insered number\n");
	scanf("%d",&data[len]);

	//5.traversal data array
	t=1;
	while(t!=0)
	{
		if(data[right[t]]>data[len])
		{
			//hard-core of procedure
			right[len]=right[t];
			right[t]=len;

			break;
		}
		t=right[t];
	}

	//6.printf data array
	t=1;
	while(t!=0)
	{
		printf("%d ",data[t]);
		t=right[t];
	}

	getchar();getchar();
	return 0;

}