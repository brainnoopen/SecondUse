#include<stdio.h>
#include<string.h>

int main()
{
	//int a[50],s[50];
	char a[50],s[50];

	//behind is the number after mid
	int len,mid,behind,i;
	int head=0;

	gets(a);  //Input String
	len=strlen(a);

	if(len%2==0)	
	{
		mid=len/2-1; //  5/2-1=1;
		behind=mid+1;
	}
	else
	{
		/* 
		error I have
		little different cause big fault

		mid=len/2;
		behind=mid+1;
		*/

		mid=len/2-1;
		behind=mid+2;
	}


	//Array s[] is stack to store
	for(i=0;i<=mid;i++)
	{
		//head++;
		s[head]=a[i];
		head++;
	}

	

	


	
	for(i=behind;i<=len-1;i++)
	{
		if(a[i]!=s[head-1])
			break;

		head--;

	}
	
	if(head==0)
		printf("YES!");
	else
		printf("NO!");

	getchar();getchar();

	return 0;

}

