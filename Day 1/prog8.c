#include<stdio.h>
#include<string.h>

int main()
{
    char ch[10];
    printf("Enter the input: \n");
    scanf("%s",&ch);

    char digits[10] = {'0','1','2','3','4','5','6','7','8','9'};

    char *result;

    result = strstr(ch,digits);
    if(result != NULL)
        printf("The given input is has all characters");
    else
        printf("The given input has integer numbers");

//    printf("%s",result);

}
