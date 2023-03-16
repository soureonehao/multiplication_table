#include<stdio.h>
void main() {
	int row, col, sum; //定义行列，得数
	for (row = 1; row <= 9; row++) {//第一次遍历输出行
		for (col = 1; col <= row; col++) {
			sum = row * col;		//第二次遍历输出列

			printf("%d * %d = %d ", row, col, sum);//打印出九九乘法表
		}
		printf("%\n");
	}

}