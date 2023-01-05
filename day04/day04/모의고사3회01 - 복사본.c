#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

double solution(int a, int b) {
	double answer = 0;
	int diff = (a < b) ? b - a : a - b;
		answer = 10.0 / diff;
	return answer * 60;
}
void main() {
	int kim_speed = 10;
	int gun_speed = 13;
	double ret = solution(kim_speed, gun_speed);
	printf("%lf Ка\n", ret);
}