//area of circle

#include <stdio.h>

#define PI 3.14

int main(int argc, char const *argv[])
{
	int radius;
	scanf("%d",&radius);
	printf("\nAreaOfCircleOfThisRadius(%d) : %f\n",radius,PI*radius*radius );

	return 0;
}