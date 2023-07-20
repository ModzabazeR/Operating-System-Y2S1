#include <stdio.h>
int main() {
	int n;
	int count = 0;
	int sum = 0;

	printf("Enter a number: ");
	scanf("%d", &n);

	while (n > 0) {
		count++;
		sum += n;
		printf("Enter a number: ");
		scanf("%d", &n);
	}

	printf("Sum = %d, Average = %d\n", sum, sum/count);
	return 0;
}
