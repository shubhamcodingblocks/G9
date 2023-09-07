#include<stdio.h>

void sum(int a, int b) {
	printf("%d", a + b);
}

void sum(int a, double b) {
	printf("%f", a + b);
}


int main() {
	int a = 10, b = 20;

	sum(a, b);
	printf("\n");

	sum(100, 12.9);

}