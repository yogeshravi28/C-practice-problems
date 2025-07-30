#include <stdio.h>

void evenorodd(int n1)
{
	int result;
	result = (n1 %2);
	if (result == 0)
	printf("EVEN\n");
	else
	printf("ODD\n");
}

int main()
{
	int num;
	printf("enter a number :\n");
	scanf("%d",&num);
	evenorodd(num);
}

