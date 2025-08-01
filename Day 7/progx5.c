#include<stdio.h>

struct Tele_dir{
    char Name[10];
    char Address[20];
    int Tele_number;
};

int main()
{
    FILE *fptr;
    fptr = fopen("file4.txt", "w");

    if(fptr == NULL)
    {
        printf("ERROR In creating or writing the File");
        return 1;
    }

    struct Tele_dir person1 = {"Yogesh","Bangalore",100000};
    struct Tele_dir person2 = {"Manoj","Chikbalapur",3000000};
    struct Tele_dir person3 = {"Shubham","Dandeli",2000000};

/*    printf("Student Details:\n");
    printf("  Name: %s\n", person1.Name);
    printf("  Address: %s\n", person1.Address);
    printf("  Telephone number: %d\n", person1.Tele_number);
*/

  //  fputs(person1,"file4.txt");

 //   int flag = 0;
   /// flag = fwrite(&person1, sizeof(struct Tele_dir), 1, fptr);

    fprintf(fptr,"%s","TELEPHONE DIRECTORY\n");
    fprintf(fptr, "%s %s %d\n", person1.Name, person1.Address, person1.Tele_number);
    fprintf(fptr, "%s %s %d\n", person2.Name, person2.Address, person2.Tele_number);
    fprintf(fptr, "%s %s %d\n", person3.Name, person3.Address, person3.Tele_number);
    


    fclose(fptr);
    printf("Contact added successfully!\n");
    return 0;
}