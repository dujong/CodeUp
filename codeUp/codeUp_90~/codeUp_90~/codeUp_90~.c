#include <stdio.h>

void main() {

	/*int num1= 2, num2;
	scanf("%d",&num2);

	for (int i = 0; i < num2; i++) {
		printf("%d\n", num1);
		num1 *= 3;
	}									codeUp_90 */


	/*int num1 = 1, num2;
	scanf("%d", &num2);

	for (int i = 0; i < num2; i++) {
		printf("%d\n", num1);
		num1 = (num1 * -2) +1;
	}									codeUp_91 */

	/*int day = 1;
	int a=3, b=7, c=9;
	while (day % a != 0 || day % b != 0 || day % c != 0) {
		day++;
	}
	printf("%d", day);				codeUp_92 */

	/*int a[24] = { 0 };
	int n,t;
	printf("몇 회 입력하시겠습니까? ");
	scanf("%d", &n);

	for (int i = 0; i <= n; i++) {
		scanf("%d", &t);
		a[t] = a[t] + 1;
	}

	for (int i = 1; i < 24; i++) {
		printf("%d  ", a[i]);
	}								codeUp_93,94 */

	/*int a[24] = { 0 };
	int n, t, min;
	printf("몇 회 입력하시겠습니까? ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		a[t] = a[t] + 1;
	}

	for (int i = 1; i < 24; i++) {
		printf("%d  ", a[i]);
	}

	for (int i = 23; i > 0; i--) {
		if (a[i] != 0)
			min = i;
	}
	printf("\n%d번째", min);
										codeUp_95 */

	/*int a[20][20] = {0,};
	int i, x, y;
	scanf("%d", &i);

	for (int j = 0; j < i; j++) {
		scanf("%d %d", &x, &y);
		a[x][y] = 1;
	}

	for (int j = 1; j < 20; j++) {
		for (int k = 1; k < 20; k++) {
			printf("%d ", a[j][k]);
		}
		printf("\n");
	}									codeUp_96 */

	/* int a[20][20] = { 0, };
	int n, x, y;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);

		for (int j = 0; j < 20; j++) {
			if (a[j][y] == 0)
				a[j][y] = 1;
			else
				a[j][y] = 0;
		}
		for (int j = 0; j < 20; j++) {
			if (a[x][j] == 0)
				a[x][j] = 1;
			else
				a[x][j] = 0;
		}

			if (a[x][y] == 0)
				a[x][y] = 1;
			else
				a[x][y] = 0;
		
	}

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}									codeUp_97 */


	/*int l,d, x, y;	// h = 세로  w = 가로  n = 막대 개수  l = 막대 길이
	int board[30][30] = {0,};					// d = 막대를 놓는 방향  x, y = 막대의 시작 위치

	
	printf("막대의 길이를 입력해주세요!!");
	scanf("%d",&l);

	printf("막대의 방향을 정해주세요!!");
	scanf("%d",&d);

	printf("막대의 x축, y축을 정해주세요!!");
	scanf("%d %d",&x,&y);

	if (d == 0) {
		for (int i = 0; i < l; i++) {
			board[x][y] = 1;
			y++;
		}
	}

	else {
		for (int i = 0; i < l; i++) {
			board[x][y] = 1;
			x++;
		}
	}

	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			printf("%d",board[i][j]);
		}
		printf("\n");
	}						codeUp_98	*/		


	/*int maze[10][10] = { 0, };
	int j,h = 1, w =1;
	maze[1][3] = 1, maze[2][3] = 1, maze[2][4] = 1, maze[2][5] = 1, maze[3][7] = 1;
	maze[4][7] = 1, maze[5][7] = 1, maze[6][7] = 1, maze[5][5] = 1, maze[6][5] = 1, maze[7][5] = 1;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 0 || i == 9 || j == 0 || j == 9) {
				maze[i][j] = 1;
			}
			else if (i == 6 && j == 6)
				maze[i][j] = 2;
		}
	}
	for (int i = h; i < 8; i++) {
		
		for (j = w; j < 8; j++) {
			if (i == 1 && j == 1) {
				maze[i][j] = 9;
			}

			if (maze[i][j + 1] == 0) {
				w++;
				maze[i][j] = 9;
				
			}
			else if (maze[i][j + 1] != 0) {
				h++;
				maze[i][j] = 9;
				break;
			}
		}
		if (maze[i + 1][j] == 2 || maze[i][j + 1] == 2)
			break;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d ",maze[i][j]);
		}
		printf("\n");
	}							 codeUp_99 */
}