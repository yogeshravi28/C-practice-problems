#include<stdio.h>

int main()
{
    int n;

    printf("Enter a number:\n");
    scanf("%d",&n);

    int powerof2 = 1 << n;
    printf("2^%d = %d\n",n,powerof2);
}
