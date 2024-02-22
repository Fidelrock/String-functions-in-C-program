//Total special symbols/characters
#include<stdio.h>
#include<conio.h>
int main(int argc, char** argv)
{
	char s[200];
	int i,special=0;
	printf("Enter any word\n");
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
		{
			
		}
		else if(s[i]>=48&&s[i]<=57)
		{
			
		}
		else
		{
			special++;
			
		}
	
	}
		printf("Total special characters : %d",special);
		getch();

}