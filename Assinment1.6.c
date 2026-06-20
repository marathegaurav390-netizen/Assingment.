//6.Write a program to check whether a given character is uppercase or lowercase. 


#include <stdio.h>

int main()
{
	char ch;
	
	printf("enter the character: ");
	scanf("%c", &ch);
	
	
	
	if( ch >= 'A' && ch <= 'Z' )
	{
		printf("Uppercase");
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("lowercase");
	}
	else
	{
		printf("noy an alphabet");
	}
	return 0;
}