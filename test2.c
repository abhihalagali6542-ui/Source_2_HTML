#include<stdio.h>
#include"string.h"
#define MAX 0
#define unsigned int uint
// single line coment
/* multiline 
        coment*/
void remove_alpha(char a[],char s[])
{
	for(int i=0;a[i]!=0;i++)
	{
		for(int j=0;s[j]!=0;j++)
		{
			if(a[i]==s[j] && a[i]!=' ')
			{
				for(int k=i;a[k]!=0;k++)
				{
					a[k]=a[k+1];
				}
				i--;
				break;
			}
		}
	}
}
int main()
{
	char alp[100]="abcdefghijklmnopqrstuvwxyz";
	char str[50];
	scanf("%[^\n]",str);
	remove_alpha(alp,str);
	printf("%s",alp);
}
