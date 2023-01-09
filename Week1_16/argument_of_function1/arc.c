#include <stdio.h>

void add(int a, int b){
	a += b;
	printf("a : %d\n", a);
}

void add_p(int *a, int* b){
	*a += *b;
	printf("a : %d\n", *a);
}

void sub(int *a){
	printf("%d\n", a[3]);
}

int main() {

	int a = 3, b = 5;
	add(a, b);
	add_p(&a, &b);

	printf("a : %d\n", a);

	int std[30] = {1,2, 4, 5, 6};
	sub(std);


	return 0;
}
