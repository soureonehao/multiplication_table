#include<stdio.h>
void main() {
	int row, col, sum; //�������У�����
	for (row = 1; row <= 9; row++) {//��һ�α��������
		for (col = 1; col <= row; col++) {
			sum = row * col;		//�ڶ��α��������

			printf("%d * %d = %d ", row, col, sum);//��ӡ���žų˷���
		}
		printf("%\n");
	}

}