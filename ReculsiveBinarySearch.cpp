#include	<stdio.h>

int BSearchRecur(int arr[], int first, int last, int target) {
	int mid;
	if (first > last) {
		return -1;
	}
	mid = (first + last) / 2;
		
	if (arr[mid] == target) {
		return mid;
	}
	else if (arr[mid] > target) {
		BSearchRecur(arr, first, mid + 1, target);
	}
	else {
		BSearchRecur(arr, mid - 1, last, target);
	}
}

int main() {
	int arr[] = { 1,3,5,7,9 };
	int idx;
	
	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int), 3);
	if (idx == -1) {
		printf("Å½»ö ½ÇÆÐ\n");
	}
	else {
		printf("ÀÎµ¦½º : %d\n", idx);
	}
}