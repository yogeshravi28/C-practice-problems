#include <stdio.h>

int main()
{
	char firstchar, secondchar;
	int diff;

	printf("Enter the first charcater: \n");
	scanf("%c",&firstchar);
	printf("Enter the second charcater: \n");
	scanf(" %c",&secondchar);

	diff = (secondchar - firstchar) - 1;
	printf("the number of characters between them are:\n");
	printf("%d\n",diff);

return 0;
}
