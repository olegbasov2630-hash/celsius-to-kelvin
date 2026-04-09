#include <stdio.h>

int main(void)
{
	int celsius, kelvin;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = 20;

	while (celsius <= upper)
	{
		kelvin = celsius + 273;
		printf("%d : %d\n", celsius, kelvin);
		celsius = celsius + step;
	}
}