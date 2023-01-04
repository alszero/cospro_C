#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool solution(char* sentence) {
	char* str = (char*)malloc(sizeof(char) * 103);//char str[103]; ===> 배열 생성
	int len = 0;
	for (int i = 0; i < strlen(sentence); i++) { //문자열 길이만큼 반복
		char ch = sentence[i]; //ch문자열값을 하나를 저장
		if (ch != ' ' && ch != '.') str[len++] = ch; // 공백이거나 _가 아니면 ch를 str에 추가
		//수정할 부분 ===> ||를 &&로 수정
	}
	for (int i = 0; i < len / 2; i++) { //배열길이의 반만 비교 길이/2
		if (str[i] != str[len - 1 - i]) return false;//가장 왼쪽, 가장 오른쪽이 같지 않다면
	}
	return true;
}

void main() {
	//char* s1 = {"ra ce.car"}; //1 (true)
	char* s1 = { "ra c.car" }; //0 (false) ==> recar
	bool ans = solution(s1);
	printf("%d", ans);
}