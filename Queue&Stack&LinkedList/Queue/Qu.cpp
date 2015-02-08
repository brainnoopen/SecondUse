#include<stdio.h>
int main()
{
	int q[50]={0,6,3,1,7,5,8,9,2,4};
	int head=1,tail=10;//if tail=9 problem would be come when head=tail
	while(head<tail)
	{
		printf("%d",q[head]);
		head++;    // output 1st number

		q[tail]=q[head]; //output 2nd number
		tail++;
		head++;
	}

	getchar();getchar();
	return 0;
}