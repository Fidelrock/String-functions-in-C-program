//This program allows the user to sign up and log in into his / her portal
#include<stdio.h>
//#include<windows.h>
#include<string.h>
#include<conio.h>
 void header();
int main(int argc, char** argv)
{
	char username[12];
	char password[10];
	char a[12];
	char b[10];
printf("\n***********************************************************************************************\n");
 printf("\t\t*************** WELCOME SIGN UP FIRST TO LOG INTO YOUR PORTAL*****\n\n");
 printf("\t\t\tEnter your username\n");
 scanf("%s",&username); //We are accepting the user to input a username so we declare a variable string
 printf("\t\t\tEnter the password that you would use\n\t\t\tLet your password bare atleast one special character and a digit\n");
 scanf("%s",&password); // We are accepting a password from the user so we declare a character variable
 printf("\nYOU HAVE CREATED YOUUR ACCOUNT SUCCESSFULLY YOU CAN NOW LOG IN TO YOUR PORTAL\n");
 printf("\n***********************************************************************************************\n");
   system("cls");
   header();
   NEWSTART:
  	printf("\t\t\tPLEASE ENTER YOUR USERNAME\n");
 	fflush(stdin);
 	scanf("%s",&a);// We are accepting the real username of the user so we declare another variable char
 	
 	printf("\t\t\tPLEASE ENTER YOUR PASSWORD\n ");
 	fflush(stdin);
 	scanf("%s",&b); //We are accepting the real password of the user so we declare another variable for password
 	
 	if(strcmp(a,username)==0&&strcmp(b,password)==0)
	 {
	 
	 	 printf("LOG IN SUCCESSFUL\n");
	 }	
	 else if(strcmp(b,password)==1&&strcmp(a,username)==0)
	 {
		   printf("WRONG PASSWORD\n");
		  goto NEWSTART;
	 }
	 
	 else if(strcmp(a,username)==1&&strcmp(b,password)==0)
	 {
	 printf("WRONG USERNAME\n");
	 
	 goto NEWSTART;
	 	 
	 }
	 else
	 {
		 printf("WRONG CREDENTIALS \n");
		 goto NEWSTART;
	 }
 
	return 0;
}
void header()
{
	printf("\n\t\t\tLOGIN PLATFORM WELCOME\n");
}