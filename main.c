#include <stdio.h>

int main (){
	int a = 10;
	int *p = &a;

	printf("%d\n",p);
	printf("%d\n",p + 1);

	printf("\n");

	printf("%p\n",p);
	printf("%p\n",p + 1);
}
