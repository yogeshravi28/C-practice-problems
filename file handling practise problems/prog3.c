#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	FILE *fptr;
	char ch1[10], ch2[10];
	
	// open a file and write the data into the file(file2.txt)
	fptr  = fopen("file2.txt","w");

	if (fptr == NULL)
	{
		printf("Error in opening the file");
		return 1;
	}

	fputs("MANIPAL NICE",fptr);

	fclose(fptr);


	// get the data from the file and save it in the character arrays(Strings)
	fptr  = fopen("file2.txt","r");

	if (fptr == NULL)
	{
		printf("Error in opening the file");
		return 1;
	}

	fgets(ch1,8,fptr);

	fseek(fptr,8,SEEK_SET);
	
	fgets(ch2,5,fptr);

	fclose(fptr);

	// to write "IS" in  between two words and then put the data into the second file(file3.txt)
	fptr  = fopen("file3.txt","w");

	if (fptr == NULL)
	{
		printf("Error in opening the file");
		return 1;
	}

	fputs(ch1,fptr);
	fputs(" IS ",fptr);
	fputs(ch2,fptr);

	fclose(fptr);

	printf("Data is writen into the 2nd file\n");
	return 0;
}