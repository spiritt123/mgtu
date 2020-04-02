#include <stdio.h>
#include <math.h>

int main()
{
	puts("Input x: ");
	int a = 1,
		b = 1,
		x, c;
	scanf("%d",&x);
	while (b <= x)
	{
		c  = b;
		b += a;
		a  = c;
	}
	printf("%d \n",b);
}
