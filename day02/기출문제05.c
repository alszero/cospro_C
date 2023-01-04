#include<stdio.h>
#include<stdlib.h>

int solution(int number) {
	int count = 0;
	for (int i = 1; i <= number; i++) { // 주어진 숫자 만큼 반복
		int current = i;//현재 체크할 수 (1~13)
		while (current != 0) {//0이 아닌 경우
			if (current % 10 == 3 || current % 10 == 6 || current % 10 == 9) {
				//현재 넘어온 숫자값이 10으로 나눈 나머지가 3, 6, 9 일떄
				//ex) 13==>13%10 ==> 3
				//current =1 ==> 건너뜀
				//current =3 ==> 3%10 ==> 3
				count++;//3,6,9가 있으면 개수 증가
			}
			current /= 10; // 10을 나눠서 자리수를 줄임
		}//while 종료
	}//for 종료
	return count;
}

void main() {
	int ans;
	ans = solution(13); // 13은 4번 침
	printf("%d", ans);
}