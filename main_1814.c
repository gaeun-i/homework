#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
int main() {
	int number[SIZE];
	int total = 0;
	int max, min;
	float avg = 0.0;
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		number[i] = (rand() % 100) + 1;
	}
	for (int i = 0; i < SIZE; i++) {
		printf("%3d\t", number[i]);
		if ((i + 1) % 10 == 0)printf("\n");
	}
	//평균구하는 부분
	for (int i = 0; i < SIZE; i++) {
		total += number[i];
	}
	avg = (float)total / SIZE;
	max = number[0];
	min = number[0];
	//max = 0;
	//min = 0;
	//최대 최소 구하는 부분
	for (int i = 0; i < SIZE; i++) {
		if (max < number[i])max = number[i];
		if (min > number[i])min = number[i];
	}
	printf("avg = %f, max= %d, min = %d\n", avg, max, min);
	return 0;
}