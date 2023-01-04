#include<stdio.h>
#include<stdlib.h>

int solution(int price, char* grade) {
	int answer = 0;
	
	// 등급 할인율
	//“S” 5%
	//“G” 10 %
	//“V” 15 %

	//여기에 코드 작성
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