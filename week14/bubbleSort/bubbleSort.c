#include <stdio.h>
// bubbleSort �ϴ� �Լ�
void bubbleSort(int a[], int size) {
	// i : �ݺ��ϱ� ���� ���������� ������ �����ϱ� ������ ���� �پ���., j : i���� list�� ���鼭 j + 1�� ���ϸ� �ڸ� ��ȯ, temp : �ӽ� int ���� 
	int i, j, t, temp;

	for (i = size - 1; i > 0; i--) {			// list �� �ں��� ���ʴ�� ���� �ݺ���									(�ٽ�)
		printf("\n %d�ܰ�>>", size - 1);		
		for (j = 0; j < i; j++) {				// 0���� i��°���� j�� j + 1 �ڸ��� ���ϸ鼭 ��ġ�� ��ȯ�ϴ� �ݺ���	(�ٽ�)
			if (a[j] > a[j + 1]) {				// j�� j + 1 �ڸ� ���� ��(j �ڸ� ���� ũ�ٸ�)							(�ٽ�)
				temp = a[j];					// temp �� j �ڸ� ���� �ӽ� ���� *(j�� �ڸ��� ���� j + 1�� ����)
				a[j] = a[j + 1];				// j �ڸ��� j + 1 �ڸ� ���� �ְ�
				a[j + 1] = temp;				// j + 1�� temp(���� j�ڸ��� �ִ� ��)�� �ִ´�.
			}
			printf("\n\t");
			for (t = 0; t < size; t++) printf("%3d ", a[t]); // ����Ǵ� ������ ���� ���� list�� �� �� ���
		}
	}
}