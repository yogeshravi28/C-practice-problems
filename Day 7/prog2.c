#include<stdio.h>

int main()
{
    FILE *fptr;
    char ch1[20],ch2[20];

// Opening the already existing file(file1.txt) in read mode to read the contents of the file
    fptr = fopen("file1.txt","r");

    if(fptr == NULL)
    {
           printf("Error in Reading the file");
    }

//copying the contents into strings ch1 and ch2
    fgets(ch1,sizeof(ch1),fptr);
    fgets(ch2,sizeof(ch2),fptr);

    fclose(fptr);

//Creating a new file using write mode and pasting the same contents from file1.txt to file2.txt
    fptr = fopen("file2.txt","w");

    fputs(ch1,fptr);
    fputs(ch2,fptr);

    fclose(fptr);
    return 0;
}
