#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int func_a(int arr[], int len) {
	int total = 0;
	for (int i = 0; i < len; ++i) {
		total += arr[i];
	}
	return total;
}

int* solution(int total, int arr[], int arr_len) {
	int* result = (int*)malloc(sizeof(int) * arr_len);
	int req_total = func_a(arr, arr_len);
	if (req_total > total) {
		for (int i = 0; i < arr_len; ++i) {
			result[i] = total / arr_len;
		}
	}
	else {
		for (int i = 0; i < arr_len; ++i) {
			result[i] = arr[i];
		}
	}
	return result;
}

void main() {
	int req_arr[4] = { 200, 300, 200, 1500 };
	int arr_len = sizeof(req_arr) / sizeof(req_arr[0]);
	int total = 1000;
	int* result = solution(total, req_arr, arr_len);
	for (int i = 0; i < arr_len; ++i) {
		printf("[%d] ", result[i]);
	}
}
