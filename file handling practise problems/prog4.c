#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	
	FILE *fptr;
	char ch1[50], ch2[10];
	size_t subLen = strlen("GOOD");
	int count = 0;

	// open a file and write the data into the file(file4.txt)
	fptr  = fopen("file4.txt","w");

	if (fptr == NULL)
	{
		printf("Error in opening the file");
		return 1;
	}

	fputs("Hello GOOD when is GOOD nfajlk GOOD 1231345 GOOD",fptr);

	fclose(fptr);

	fptr  = fopen("file4.txt","r");

	if (fptr == NULL)
	{
		printf("Error in opening the file");
		return 1;
	}

	fgets(ch1,sizeof(ch1),fptr);

//****************************
	char *temp = ch1; // need to declare a char pointer to the string before comparing the string to "GOOD"

 while ((temp = strstr(temp, "GOOD")) != NULL) {
        count++;
        // Move the pointer past the found occurrence to avoid counting the same match
        temp += strlen("GOOD"); 
    }


 printf("The string occurs %d times\n",count);

	fclose(fptr);
	return 0;
}