#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool solution(char* sentence) {
	char* str = (char*)malloc(sizeof(char) * 103);//char str[103]; ===> �迭 ����
	int len = 0;
	for (int i = 0; i < strlen(sentence); i++) { //���ڿ� ���̸�ŭ �ݺ�
		char ch = sentence[i]; //ch���ڿ����� �ϳ��� ����
		if (ch != ' ' && ch != '.') str[len++] = ch; // �����̰ų� _�� �ƴϸ� ch�� str�� �߰�
		//������ �κ� ===> ||�� &&�� ����
	}
	for (int i = 0; i < len / 2; i++) { //�迭������ �ݸ� �� ����/2
		if (str[i] != str[len - 1 - i]) return false;//���� ����, ���� �������� ���� �ʴٸ�
	}
	return true;
}

void main() {
	//char* s1 = {"ra ce.car"}; //1 (true)
	char* s1 = { "ra c.car" }; //0 (false) ==> recar
	bool ans = solution(s1);
	printf("%d", ans);
}