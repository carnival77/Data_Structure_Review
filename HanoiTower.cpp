#include <stdio.h>

void Hanoi(int num, char from, char by, char to) {
	
	if (num == 1) {
		printf("���� 1�� %c���� %c�� �Ű���ϴ�.\n", from, to);
	}
	
	else 
	{
		Hanoi(num - 1, from, to, by);
		printf("���� %d�� %c���� %c�� �Ű���ϴ�.\n", num, from, by);
		Hanoi(num - 1, by, from, to);
	}
}

int main() 
{
	Hanoi(3, 'a', 'b', 'c');
	return 0;
}