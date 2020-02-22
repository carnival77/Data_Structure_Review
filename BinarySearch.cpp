#include <stdio.h>

int BSearch(int ar[], int len, int target)
{
	int first = 0;			// 탐색 대상의 시작 인덱스 값
	int last = len - 1;		// 탐색 대상의 마지막 인덱스 값
	int mid;

	while (first <= last)
	{
		mid = (first + last) / 2; // mid = 탐색 대상의 중앙 인덱스 값

		if (target == ar[mid]) {	// 타겟이 mid 와 일치한다면,

			return mid;				// mid (인덱스 값) 을 반환환다.
		}
		else {
			if (target < ar[mid]) {	// target 이 탐색 배열의 중앙값보다 작다면,
				last = mid - 1;		// 탐색 대상의 마지막 인덱스 값을 중앙 인덱스 값의 바로 전 값으로 설정함으로써, 탐색 범위를 절반으로 줄인다.
			}						// last = (mid - 1)
			else
			{						// target 이 탐색 배열의 중앙값보다 크거나 같다면,
				first = mid + 1;	// 탐색 대상의 첫 인덱스 값을, 중앙 인덱스 값의 바로 다음 값으로 설정함으로써, 탐색 범위를 절반으로 줄인다.
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
		printf("탐색 실패");
	}
	else {
		printf("타겟 저장 인덱스 : %d \n", idx);
	}

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1) {
		printf("탐색 실패");
	}
	else {
		printf("타겟 저장 인덱스 : %d \n", idx);
	}
}