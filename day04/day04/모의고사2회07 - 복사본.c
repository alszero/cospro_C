#pragma warning(disable:4996)
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

char* solution(char* s) {
	char* s_ret = (char*)malloc(sizeof(char) * (strlen(s) + 1));
	strcpy(s_ret, s);
	for (int i = 0; s_ret[i] != 0; ++i) {
		if ('0' <= s_ret[i] && s_ret[i]<= '9') 
			s_ret[i] = 'i' - s_ret[i];
	}
	return s_ret;
}

void main() {
	char string[] = "cos pro 2018 to 2019";
	char* result = solution(string);
	printf("%s \n", result);

	return 0;
}