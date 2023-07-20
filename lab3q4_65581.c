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

	printf("Sum = %d, Average = %.2f\n", sum, (float)sum/(float)count);
	return 0;
}
