//Write a program to check given 3 digit number is pallindrome or not.



#include <stdio.h>
	int main(){

	
	int num, original ,reverse;
	
	printf("enter a 3-digit number:");
	scanf("%d", &num);
	
	original = num;
	 
	reverse = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num/100);
	
	if (original == reverse)
	     printf(" palindrone number");
	     else 
	     printf("not a palindrone number: ");
	     
	     return 0;
	     


}