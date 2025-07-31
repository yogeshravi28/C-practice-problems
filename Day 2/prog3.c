#include<stdio.h>

int main()
{
    int num = 123415;
    int count=0;
    int to_check;
    int remainder=0;

    printf("Enter the digit to check:");
    scanf("%d",&to_check);

    while(num>0)
    {
        remainder = num%10;
        if(remainder == to_check)
        {
            count++;
        }
        num /=10;
    }
    printf("%d",count);
return 0;
}


