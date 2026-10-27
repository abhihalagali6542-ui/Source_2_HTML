#include <stdio.h>
#include "string.h"
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
	float f = 2.568;
	char ch = 'A';
	scanf("%[^\n]",str);
	remove_alpha(alp,str);
	printf("%s",alp);
}


//second prog

#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,s1,s2;
    printf("Enter time 1: ");
    scanf("%d:%d:%d",&h1,&m1,&s1);
    printf("Enter time 2: ");
    scanf("%d:%d:%d",&h2,&m2,&s2);

    int time1 = (h1*3600)+(m1*60)+s1,time2 = (h2*3600)+(m2*60)+s2;

    int diff;
    if(time1>time2)
        diff = time1-time2;
    else
         diff = time2-time1;

    if(diff>43200)
        diff=86400-diff;

    int h=diff/3600;
    diff=diff%3600;
    int m=diff/60;
    diff=diff%60;
    int s=diff;
    printf("diff : %02d:%02d:%02d\n",h,m,s);
}
/*
	ends here
*/