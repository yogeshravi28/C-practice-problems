#include<stdio.h>

int main()
{
    int num = 12345;
    int sum = 0;

    while(num!=0)
    {
        sum += (num%10);
        num /= 10;

    }
    printf("%d",sum);
return 0;
}
