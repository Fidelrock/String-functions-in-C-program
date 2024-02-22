//alphabets in a string
#include<stdio.h>
int main(int argc, char** argv)
{
	char s[200];
	int i;
	int alpha=0;
	printf("Enter any word\n");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]>=60&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
		{
			alpha++;
		}
	}
	printf("%d",alpha);
	return 0;
}