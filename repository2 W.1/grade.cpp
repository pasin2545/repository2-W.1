#include<stdio.h>

int main() {
	int a, b, c, re;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	if (a >= 0 && a <= 30 && b >= 0 && b <= 30 && c >= 0 && c <= 40) {
		re = a + b + c;
		if (re >= 80 && re <= 100) {
			printf("A");
		}
		else if (re >= 75 && re < 80) {
			printf("B+");
		}
		else if (re >= 70 && re < 75) {
			printf("B");
		}
		else if (re >= 65 && re < 70) {
			printf("C+");
		}
		else if (re >= 60 && re < 65) {
			printf("C");
		}
		else if (re >= 55 && re < 60) {
			printf("D+");
		}
		else if (re >= 50 && re < 55) {
			printf("D");
		}
		else {
			printf("F");
		}
	}
	return 0;
}