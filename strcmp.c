//strcmp
#include<stdio.h>
#include<string.h>
int main(int argc, char** argv)
{
	char name1[200]="FidellovesRakel";
	char name2[200]="RakellovesFidel";
	if(strcmp(name1,name2)==0)
	{
		printf("String name1 is similar to string name2\n");
	}
	else
	{
		printf("String name1 is not similar to name2\n");
	}
	return 0;
}