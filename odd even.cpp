#include <stdio.h>
int main()
{         //whether a number is odd or even
	int a,b;
	printf("enter number to check whether it is odd or even\n");
	scanf("%d",&a);
	b=a%2;
	if (b==0)
	printf("the number %d is even. \n", a);
	else 
	printf("the number %d is odd. \n ", a);
	return 0;
	
}
