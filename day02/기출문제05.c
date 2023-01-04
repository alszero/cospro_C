#include<stdio.h>
#include<stdlib.h>

int solution(int number) {
	int count = 0;
	for (int i = 1; i <= number; i++) { // �־��� ���� ��ŭ �ݺ�
		int current = i;//���� üũ�� �� (1~13)
		while (current != 0) {//0�� �ƴ� ���
			if (current % 10 == 3 || current % 10 == 6 || current % 10 == 9) {
				//���� �Ѿ�� ���ڰ��� 10���� ���� �������� 3, 6, 9 �ϋ�
				//ex) 13==>13%10 ==> 3
				//current =1 ==> �ǳʶ�
				//current =3 ==> 3%10 ==> 3
				count++;//3,6,9�� ������ ���� ����
			}
			current /= 10; // 10�� ������ �ڸ����� ����
		}//while ����
	}//for ����
	return count;
}

void main() {
	int ans;
	ans = solution(13); // 13�� 4�� ħ
	printf("%d", ans);
}