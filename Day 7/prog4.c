#include<stdio.h>
#include<ctype.h>

int main()
{
    FILE *fptr, *oddptr, *evenptr;
    int num;

// Writing/Creating a new file(file3.txt) and writing the contents into the file
    fptr = fopen("file3.txt","w");

    if(fptr == NULL)
    {
           printf("Error in Creating or Writing the file");
           return 1;
    }

    fputs("1\n",fptr);
    fputs("12\n",fptr);
    fputs("234\n",fptr);
    fputs("56789\n",fptr);

    fclose(fptr);

    fptr = fopen("file3.txt","r");
    oddptr = fopen("odd.txt","w");
    evenptr = fopen("even.txt","w");

    if(fptr == NULL || oddptr == NULL || evenptr == NULL)
    {
           printf("Error in Reading or Writing the file");
           return 1;
    }

    while(fscanf(fptr,"%d", &num) !=EOF)
    {
        if(num % 2 == 0)
        {
            fprintf(evenptr,"%d\n",num);
        }
        else
        {
            fprintf(oddptr,"%d\n",num);
        }

    }

    fclose(fptr);
    fclose(oddptr);
    fclose(evenptr);

    return 0;
}
