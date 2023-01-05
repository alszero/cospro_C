#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int solution(int price[], int price_len, int money) {
	int answer = 0;
	for (int i = 0; i < price_len; i++) {
		price[i];
	}
	return answer;
}

void main() {
		int price[] = { 1000,1200,800,500,2000 };
		int len = sizeof(price) / sizeof(price[0]);
		int money = 10000;
		int result = solution(price, len, money);
		printf("%d \n", result);
		return 0;
}