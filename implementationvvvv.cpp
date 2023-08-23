#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char databits[30];
	printf("Enter the databits");
	scanf("%s", databits);
	
	for(i=0;i<strlen(databits);i++)
	{
	printf("%c\n",databits[i]);
	}
	return 0;
}