#include <stdio.h>

void areaofcircle(int radius)
{
	float area;
	area = 3.14 * radius * radius;
	printf("The area of circle is:\n");
	printf("%f",area);
}

int main()
{
	int r;
	printf("Enter the radius of the circle:\n");
	scanf("%d",&r);
	areaofcircle(r);
}
