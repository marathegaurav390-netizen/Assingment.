//5 Write a program to check whether a person is eligible to vote (age = 18). 


#include <stdio.h>

int main()
{
	int age;
	
	printf("enter age number: ");
	scanf("%d", &age);
	
	if( age >= 18)
	     
	    {
	     	printf("Eligible to vote");
		}
		else
		{
		 	printf("not Eligible to vote");
		}
            
        return 0;



}
