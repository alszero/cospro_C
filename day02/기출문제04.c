#include<stdio.h>
#include<stdlib.h>

int solution(int price, char* grade) {
	int answer = 0;
	
	// ��� ������
	//��S�� 5%
	//��G�� 10 %
	//��V�� 15 %

	//���⿡ �ڵ� �ۼ�
	if ((grade) == "S") answer = price - price * 0.05;
	else if((grade) == "G") answer = price - price * 0.1;
	else if ((grade) == "V") answer = price - price * 0.15;
	return answer;
}

void main() {
	int ans;
	int price = 10000;
	char* grade = "S";
	ans = solution(price, grade);
	printf("%d", ans);
}