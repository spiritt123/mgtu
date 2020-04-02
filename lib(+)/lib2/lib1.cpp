#include <stdio.h>
#include <math.h>

int main()
{
	puts("Input x: ");
	float a,b,c,x;
	scanf("%f",&x);
	b = abs(sin(8*x))+17;
	c = 1-sin(4*x)*cos(pow(x,2)+18);
	a = pow(b/pow(c,2),0.5);
	printf("%f \n",a);
}
