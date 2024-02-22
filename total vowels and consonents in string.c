//Total vowels and consonents
#include<stdio.h>
#include<conio.h>
int main(int argc, char** argv)
{
	char s[200];
	int i,vowel=0, consonent=0;
	printf("Enter any string\n");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		{
			vowel ++;
		}
		
		else
		{
			consonent ++;	
		}
	
	}
		printf("Total vowels are : %d\nTotal consonents are : %d",vowel,consonent);
		getch();

}