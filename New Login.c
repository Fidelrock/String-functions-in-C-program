//A login program that will enable multiple users to access a certai website
#include<stdio.h>
#include<string.h>
header()
{
	printf("\n\t\t\t**********************************************\n");
	printf("\t\t\t================REGISTER HERE=================\n");
	printf("\t\t\t**********************************************\n");
	
}
int main()
{
	char u[50];
	char u1[50];
	char p[50];
	char p1[50];
	int i;
	header();
	for(i=0;i<5;i++)
	{
		printf("%d.\n",i+1);
		printf("User %d Enter your username\n",i+1);
		scanf("%s",&u[i]);
		printf("Enter your password\n");
		scanf("%s",&p[i]);
		system("cls");
		header();
	}
	system("cls");
	header();
	
	return 0;
}
