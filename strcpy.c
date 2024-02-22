//strcpy(s1,s2)
#include<stdio.h>
#include<string.h>
int main(int argc, char** argv)
{
	char name1[200]="Fidel";
	char name2[200]="Rakel";
	strcpy(name1,name2);
	printf("%s",name1);
	strcpy(name2,name1);
	printf("%s",name2);
	return 0;
}