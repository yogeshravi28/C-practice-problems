#include <stdio.h>
#include <ctype.h>

void uppertolower(char a1)
{
	char lower;
	lower = tolower(a1);
	printf("The lower case char is :");
	printf("%c",lower);	
}

int main()
{
	char upper;
	printf("Enter a upper case char :");	
	scanf("%c", &upper);
	uppertolower(upper);
	
}
