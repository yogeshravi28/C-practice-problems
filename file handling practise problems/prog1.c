#include<stdio.h>

int main()
{
	FILE *fptr;
	char ch;
	
	// To create a new file and write data into it
	fptr = fopen("file1.txt","w");
	
	if(fptr == NULL)
	{
		printf("Error in creating or opening a file");
		return 1;
	}
	fputs("Hello",fptr);
	fputs("\n",fptr);
	fprintf(fptr,"This is Yogesh\n");

	fclose(fptr);
	printf("Content is written into the file\n");

	// to Read the data from the file and display it to the console
	
	fptr = fopen("file1.txt","r");

	if(fptr == NULL)
	{
		printf("Error in opening a file\n");
		return 1;
	}
	
	while((ch = fgetc(fptr)) != EOF)
	{
		printf("%c",ch);
	}
	fclose(fptr);

return 0;
}
