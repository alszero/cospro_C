#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int solution(int data[], int data_len) {
	double total = 0;
	for (int i = 0; i < data_len; ++i)
		total += data[i]; // 배열요소의 총합계
	// i=0 ==> total = 1, i=1 ==> total+=2
	int cnt = 0;
	double average = total / data_len; //평균 = 총합계 / 길이
	for (int i = 0; i < data_len; i++)
		if (data[i] <= average)//배열 <= 평균보다 작을경우
			cnt += 1;//cnt를 하나씩 증가
	return cnt;
}

void main() {
	int ans;
	int num[] = { 1,2,3,4,5,6,7,8,9,10 };
	ans = solution(num, 10);
	printf("%d", ans);
}