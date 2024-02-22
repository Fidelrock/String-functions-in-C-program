#include<stdio.h>
#include<string.h>
struct data
{
	char name[200];
};
int main(int argc, char** argv)
{
	struct data m;
	strcpy(m.name,"Fidel");
	printf("%s",m.name);
	strrev(m.name);
	printf("\n%s",m.name);
	return 0;
}