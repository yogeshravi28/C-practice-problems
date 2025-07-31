#include<stdio.h>

int main()
{
    FILE *fptr;
    char ch;
    int char_count=0;
    int spaces_count=0;
    int tabs_count=0;
    int lines_count=0;

// Opening the already existing file(file1.txt) in read mode to read the contents of the file
    fptr = fopen("file1.txt","r");

    if(fptr == NULL)
    {
           printf("Error in Reading the file");
    }

    while((ch = getc(fptr)) != EOF)
    {
        char_count++;

        if(ch == ' ')
            spaces_count++;
        else if(ch == '\t')
            tabs_count++;
        else if(ch == '\n')
            lines_count++;
    }

    printf("The number of characters are: %d \n",char_count);
    printf("The number of spaces are: %d \n",spaces_count);
    printf("The number of tabs are: %d \n",tabs_count);
    printf("The number of lines are: %d \n",lines_count);


    return 0;
}
