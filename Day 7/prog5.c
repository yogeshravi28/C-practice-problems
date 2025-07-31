#include<stdio.h>

struct Tele_dir{
    char Name[10];
    char Address[20];
    int Tele_number;
};

int main()
{
    FILE *fptr;
    fptr = fopen("file4.txt", wt);

    if(fptr == NULL)
    {
        printf("ERROR In creating or writing the File");
        return 1;
    }

    struct Tele_dir Tel1;


}
