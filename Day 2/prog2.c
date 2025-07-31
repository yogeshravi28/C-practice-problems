#include<stdio.h>

int main()
{
    int num = 12345;
    int reverse_num=0;

    while(num>0)
    {
        reverse_num = reverse_num *10 + (num%10);
        num /= 10;
    }
    printf("%d",reverse_num);
return 0;
}

