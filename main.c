#include <stdio.h>

int main (){
	int a = 10;
	int *p = &a;

	printf("Value of p is %d\n",*p);
	printf("Addres of P is %p\n",p);

	int b = 20;
	*p = b;


	printf("Value of P is %d\n",*p);
	printf("Addres of P is %p\n",p);

}
