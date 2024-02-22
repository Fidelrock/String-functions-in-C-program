//strupr
#include<stdio.h>
#include<string.h>
int main(int argc, char** argv)
{
	char R[56]="RAKEL";
	printf("%s",strupr(R));
	printf("\n%s",strlwr(R));
	return 0;
}