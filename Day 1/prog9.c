#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int num1 = rand()%100;
    int num2 = rand()%100;

    int sum = num1 + num2;

    printf("The first number is: %d\n",num1);
    printf("The second number is: %d\n",num2);
    printf("The sum of two random numbers is: %d\n",sum);
}
