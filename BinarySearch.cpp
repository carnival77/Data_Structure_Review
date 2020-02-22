#include <stdio.h>

int BSearch(int ar[], int len, int target)
{
	int first = 0;			// Ž�� ����� ���� �ε��� ��
	int last = len - 1;		// Ž�� ����� ������ �ε��� ��
	int mid;

	while (first <= last)
	{
		mid = (first + last) / 2; // mid = Ž�� ����� �߾� �ε��� ��

		if (target == ar[mid]) {	// Ÿ���� mid �� ��ġ�Ѵٸ�,

			return mid;				// mid (�ε��� ��) �� ��ȯȯ��.
		}
		else {
			if (target < ar[mid]) {	// target �� Ž�� �迭�� �߾Ӱ����� �۴ٸ�,
				last = mid - 1;		// Ž�� ����� ������ �ε��� ���� �߾� �ε��� ���� �ٷ� �� ������ ���������ν�, Ž�� ������ �������� ���δ�.
			}						// last = (mid - 1)
			else
			{						// target �� Ž�� �迭�� �߾Ӱ����� ũ�ų� ���ٸ�,
				first = mid + 1;	// Ž�� ����� ù �ε��� ����, �߾� �ε��� ���� �ٷ� ���� ������ ���������ν�, Ž�� ������ �������� ���δ�.
			}						// first = (mid + 1)	 
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1,3,5,7,9 };
	int idx;

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1) {
		printf("Ž�� ����");
	}
	else {
		printf("Ÿ�� ���� �ε��� : %d \n", idx);
	}

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1) {
		printf("Ž�� ����");
	}
	else {
		printf("Ÿ�� ���� �ε��� : %d \n", idx);
	}
}