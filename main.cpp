#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void reserve(char str[]);
int main() 
{
	char str[50]; 
	printf("�п�J�@�Ӧr��:");
	gets(str);
	reserve(str);
	system("pause");
	return 0;
}
void reserve(char str[])
{
	int i=0,j=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("�ഫ�᪺�r��:");
	for(j=i-1;j>=0;j--)
	  printf("%c",str[j]);
	  printf("\n");
}
