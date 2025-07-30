#include <stdio.h>

void CtoF(float c1)
{
	float fahrenheit;
	fahrenheit =  (1.8)*c1 + 32;
	printf("The temperature in fahrenheit: \n");
	printf("%f",fahrenheit);
}

int main()
{
	float celsius;
	printf("Enter the temperature in celsius: \n");
	scanf("%f",&celsius);
	CtoF(celsius);

return 0;
}
