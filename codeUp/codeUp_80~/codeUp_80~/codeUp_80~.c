#include <stdio.h>

void main() {

	/*int num1 = 0, num2 = 1;

	while (num1 <= 1000) {

		printf("%d ",num1);
		num1 += num2;
		num2++;
	}
	printf("\n%d",num2);	codeUp_80 */

	/*int num1 = 6, num2 = 6;

	for (int i = 1; i <= num1; i++) {
		for (int j = 1; j <= num2; j++) {
			printf("%d %d\n", i,j);
		}
	}						codeUp_81 */

	/*int num1;
	scanf("%X", &num1);
	if (num1 >= 10 && num1 <= 16) {
		for(int i = 0; i<=16;i++)
		printf("%X * %X = %X\n", num1, i, num1 *i);
	}
	else
		printf("잘못된 입력입니다.");	codeUp_82 */

	/* for (int i = 1; i <= 100; i++) {


		if (i > 10 && (i / 10) % 3 == 0) {	// 십의 자리가 3 6 9 인 수 
			printf("\n짝!");
			if (i % 10 != 0 && (i % 10) % 3 == 0) {			// 일의 자리가 3 6 9 인 수
				printf("짝!");
			}
		}
		else if (i % 10 != 0 &&(i % 10) % 3 == 0) {
			printf("\n짝!");
		}
		else
			printf("\n%d", i);
	}									codeUp_83 */

	/*int i, j, k, sum=0;
	scanf("%d %d %d", &i, &j, &k);

	for (int r = 0; r < i; r++) {
		for (int g = 0; g < j; g++) {
			for (int b = 0; b < k; b++) {
				printf("%d %d %d\n", r+1, g+1, b+1);
				sum++;
			}
		}
	}
	printf("%d", sum);					codeUp_84 */

	/*int num1 = 0, num2 = 0, num3;
	scanf("%d", &num3);

	while (num3 >= num2) {
		num1++;
		num2 += num1;
		printf("%d\n", num2);
	}
	printf("%d", num2);					codeUp_87 */

	/*for (int i = 1; i < 100; i++) {
		if(i % 3 != 0){
			printf("%d\n", i);
		}
	}									codeUp_88 */

	/*int a, d, n;
	scanf("%d %d %d", &a, &d, &n);
	for (int i = 1; i < n; i++) {
		printf("%d  ", a);
		a += d;
	}
	printf("%d", a);					codeUp_89 */
}