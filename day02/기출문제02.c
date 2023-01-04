#include<stdio.h>

// 문제 2 : 두 날짜 차이

//func_a 함수 작성
int func_a(int month, int day) {
	int month_list[] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; // 각 별로 달 수
	int total = 0; // 총 일수
	for (int i = 0; i < month-1; i++) {//배열에 접근할 달
		total += month_list[i];// 해당 월의 총일수
	}
	total += day; // 나머지 일수 ==> 2월 2일 경우 : 31+2-1 ==> 32 
	return total - 1;
}
// solution 함수 작성
int solution(int start_month, int start_day, int end_month, int end_day) {
	int start_total = func_a(start_month, start_day); // 그 달의 일 수 구하기
	int end_total = func_a(end_month, end_day);
	return end_total - start_total; // 끝일수 - 시작일수
 }

//main

void main() {
	int ans;
	ans = solution(2, 10, 8, 6); //1월 2일
	printf("%d",ans);
}