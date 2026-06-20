//4 Write a program to check whether a given character is a vowel or consonant.

#include <stdio.h>

int main()
{
	int c;
	
	printf(" enter charater: ");
	scanf("%c", &c);  //
	
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||
	   c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
	{
	  	printf("Vowel");
	}
	else
	{
	  	printf("Consonant");
	}
	  
	return 0;
}