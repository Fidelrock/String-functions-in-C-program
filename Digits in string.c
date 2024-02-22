#include<stdio.h>
#include<conio.h>
int main(int argc, char** argv)
{
	char s[200];
	int i;
	int digit= 0;
	printf("Enter any word\n");
	gets(s);
    for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=48&&s[i]<=57)
			digit++;
	}
	printf("The total number of digits in the word are: %d",digit);
	getch();
	
}