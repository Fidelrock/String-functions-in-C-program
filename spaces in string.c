//Total spaces
#include<stdio.h>
#include<conio.h>
void main(int argc, char** argv)
{
	char s[200];
	int i,space=0;
	printf("Enter any string\n");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			space++;
		}
	
	}
		printf("Total spaces in the sentence : %d",space);
		getch();

}