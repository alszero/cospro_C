#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int func_a(int a[][4], int n) {
	int total = 0;
	for (int r = 0; r < n; ++r) {
		for (int c = 0; c < 4; ++c) {
			total += a[r][c];
		}
	}
	return total / (n * 4);
}
int* func_b(int a[][4], int n, int val) {
	int* ret = (int*)malloc(sizeof(int) * (n * 4));
	int k = 0;
	for (int r = 0; r < n; ++r) {
		for (int c = 0; c < 4; ++c) {
			if (a[r][c] < val) ret[k++] = a[r][c];
		}
	}
	ret[k] = -1;
	return ret;
}

int *solution(int arr[][4], int n) {
	int avg = func_a(arr, n);
	int* answer = func_b(arr, n, avg);
	return answer;
}

void main() {
	int arr[][4] = { {5,12,4,31},{24,13,11,2},{43,41,19,26},{33,65,20,21}
	};
	int arr_len = sizeof(arr) / sizeof(arr[0]);
	int* result = solution(arr, arr_len);
	for (int i = 0; result[i] != -1; ++i) {
		printf("%d \n", result[i]);
	}
}