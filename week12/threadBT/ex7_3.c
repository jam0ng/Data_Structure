#include <stdio.h>
#include "threadBT.h"

int main(void) {
	// (A*B-C/D) ���� ���� Ʈ�� ����� 
	treeThNode* n7 = makeRootThNode('D', NULL, NULL, 0);	// n3�� �ڽ� ���
	treeThNode* n6 = makeRootThNode('C', NULL, NULL, 1);	// n3�� �ڽ� ���
	treeThNode* n5 = makeRootThNode('B', NULL, NULL, 1);	// n2�� �ڽ� ���
	treeThNode* n4 = makeRootThNode('A', NULL, NULL, 1);	// n2�� �ڽ� ���
	treeThNode* n3 = makeRootThNode('/', n6, n7, 0);	// n1�� �ڽ� ���
	treeThNode* n2 = makeRootThNode('*', n4, n5, 0);	// n1�� �ڽ� ���
	treeThNode* n1 = makeRootThNode('-', n2, n3, 0);	// �θ� ���� �ֻ��� ��� root node

	n4->right = n2;				// ������ ��ũ�ʵ带 ������� �����߱⿡ �� �ּҰ��� �־��ֱ�
	n5->right = n1;				
	n6->right = n3;

	printf("\n ������ ���� Ʈ���� ���� ��ȸ : ");
	threadInorder(n1);					

	getchar();  return 0;
}