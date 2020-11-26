#include <stdio.h>
int main()
{
	float v=0;
	float r=0;
	float h=0;
	printf("¬ведите радиус цилиндра и высоту");
	scanef_s("%f" ,&r);
	scanef_s("%f", &h);
	v = r * r * h * 3.14;
	printf("объем цилиндра: %f\n", v);
	return 0;
}
