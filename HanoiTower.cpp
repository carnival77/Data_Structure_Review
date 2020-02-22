#include <stdio.h>

void Hanoi(int num, char from, char by, char to) {
	
	if (num == 1) {
		printf("원반 1을 %c에서 %c로 옮겼습니다.\n", from, to);
	}
	
	else 
	{
		Hanoi(num - 1, from, to, by);
		printf("원반 %d을 %c에서 %c로 옮겼습니다.\n", num, from, by);
		Hanoi(num - 1, by, from, to);
	}
}

int main() 
{
	Hanoi(3, 'a', 'b', 'c');
	return 0;
}