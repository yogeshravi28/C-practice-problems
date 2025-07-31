# include<stdio.h>

int main()
{
    FILE *fptr;
    char ch1;
// Opening a file and writing the data into it
    fptr = fopen("file1.txt","w");
    if(fptr == NULL)
    {
        printf("ERROR in opening the file");
        return 1;
    }

    fputs("Hello\n",fptr);
    fputs("This is Yogesh\n",fptr);

    fclose(fptr);

// Opening the file again in read mode and copying the data into the char ch and printing it on the console
    fptr = fopen("file1.txt","r");

    while((ch1 = getc(fptr))!= EOF)
    {
            printf("%c",ch1);
    }

    return 0;
}
