#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define 



#ifdef TASK_1
int main()
{
	puts("Hello, world");
	return 0;
}
#endif TASK_1
#ifdef TASK_2
#define SIZE 20
int main()
{
	char name[SIZE] = {0};
	puts("What is your name?");
	gets(name);
	printf("Hello, %s!\n", name);
	return 0;
}
#endif
#ifdef TASK_3
int main()
{
	int a = 0;
	long long b = 0;
	float c = 0;
	double d = 0;
	scanf("%d%11d%f%1f", &a, &b, &c, &d);
	printf("%d\t%11d\t%f\t%1f\n", a, b, c, d);
	return 0;
}
#endif


