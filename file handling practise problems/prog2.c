#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	
	FILE *fptr;
	char ch, ch1;
	fptr  = fopen("file1.txt","r");

	if (fptr == NULL)
	{
		printf("Error in opening the file");
		return 1;
	}

	while((ch = fgetc(fptr)) != EOF)
	{
		ch1 = toupper(ch);
		printf("%c",ch1);
	}

	fclose(fptr);

	return 0;
}