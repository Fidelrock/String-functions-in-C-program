//strcat
#include<stdio.h>
#include<string.h>
int main(int argc, char** argv)
{
	char name1[200]="Fidel";
	char name2[200]="Rakel";
	printf("%s ",strcat(name1,name2));
	return 0;
}