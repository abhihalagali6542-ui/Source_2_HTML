/* this is multi-line comment */
#include<stdio.h>
int main()
{
	char ch = 'A';
	int i,j,num,temp;
	scanf("%d",&num);
	temp=num;
	for(i=1;i<=num;i++)
	{
		for(j=num;j<=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
//single line comment
	
