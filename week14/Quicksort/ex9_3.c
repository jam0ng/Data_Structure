#include <stdio.h>
void quickSort(int a[], int begin, int end, int size);

int main(void) {
	int list[10] = { 6, 2, 7, 1, 9, 3, 10, 5, 4, 8 }, i = 0;
	int size = sizeof(list) / sizeof(list[0]);		
	printf("\n ������ ���� : ");
	for (i = 0; i <= size - 1; i++) printf(" %d", list[i]);
	printf("\n\n<<<<<<<<<< �� ���� ���� >>>>>>>>>>>\n");
	quickSort(list, 0, size - 1, size);

	getchar(); return 0;
}