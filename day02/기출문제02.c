#include<stdio.h>

// ���� 2 : �� ��¥ ����

//func_a �Լ� �ۼ�
int func_a(int month, int day) {
	int month_list[] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; // �� ���� �� ��
	int total = 0; // �� �ϼ�
	for (int i = 0; i < month-1; i++) {//�迭�� ������ ��
		total += month_list[i];// �ش� ���� ���ϼ�
	}
	total += day; // ������ �ϼ� ==> 2�� 2�� ��� : 31+2-1 ==> 32 
	return total - 1;
}
// solution �Լ� �ۼ�
int solution(int start_month, int start_day, int end_month, int end_day) {
	int start_total = func_a(start_month, start_day); // �� ���� �� �� ���ϱ�
	int end_total = func_a(end_month, end_day);
	return end_total - start_total; // ���ϼ� - �����ϼ�
 }

//main

void main() {
	int ans;
	ans = solution(2, 10, 8, 6); //1�� 2��
	printf("%d",ans);
}