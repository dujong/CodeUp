#include <stdio.h>

void main() {
	
	/* int num1, num2;
	scanf("%d %d",&num1,&num2);
	printf("%d",num1|num2);		codeUp_61 */

	/*int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d", num1^num2);		codeUp_62*/

	/*int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d", num1>num2 ? num1 : num2);	codeUp_63*/

	/*int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2,&num3);
	printf("%d", (num1 > num2 ? num1 : num2) > num3 ? (num1 > num2 ? num1 : num2) : num3);	codeUp_64*/

	/*int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 % 2 == 0)
		printf("%d\n",num1);
	if (num2 % 2 == 0)
		printf("%d\n", num2);
	if (num3 % 2 == 0)
		printf("%d\n", num3);	codeUp_65*/

	/*int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 % 2 == 0)
		printf("even\n");
	else
		printf("odd\n");
	if (num2 % 2 == 0)
		printf("even\n", num2);
	else
		printf("odd\n");
	if (num3 % 2 == 0)
		printf("even\n", num3);
	else
		printf("odd\n");	codeUp_66*/

	/*int num1;
	scanf("%d",&num1);
	if (num1 % 2 == 0)
		printf("even\n");
	else
		printf("odd\n");
	if (num1 > 0)
		printf("plus\n");
	else
		printf("minus\n");	codeUp_67*/

	/*int num1;
	scanf("%d", &num1);
	num1 = num1 / 10;

	switch (num1) {
		case 10:
		case 9:
			printf("A");
			break;
		case 8:
		case 7:
			printf("B");
			break;
		case 6:
		case 5:
		case 4:
			printf("C");
			break;
		default :
			printf("D");
			break;
			}	codeUp_68*/

	/* char ch1;
	 scanf("%c", &ch1);

	 switch (ch1)
	 {
	 case 'A':
		 printf("best!!!");
		 break;
	 case 'B':
		 printf("good!!!");
		 break;
	 case 'C':
		 printf("run!");
		 break;
	 case 'D':
		 printf("slowly~");
		 break;
	 default:
		 printf("what?");
		 break;
	 }				codeUp_69*/
	
	/*int num1;
	scanf("%d",&num1);

	switch (num1) {
		case 12: case 1: case 2:
			printf("winter");  break;
	
		case 3: case 4: case 5:
			printf("spring"); break;
			
		case 6:case 7: case 8:
			printf("summer"); break;
		case 9: case 10: case 11:
			printf("fall"); break; }		codeUp_70*/
	
	/*char ch1[] = {"hello!"};
	int num1;
	scanf("%d",&num1);

	while (num1 != 0) {
		printf("%s\n",ch1);
		scanf("%d",&num1);
	}
	printf("종료!");			codeUp_71*/

	
	/*int num1;
	scanf("%d", &num1);

	while (num1 != 0) {
		printf("%d\n",num1);
		scanf("%d", &num1);
	}
	printf("종료!");		codeUp_73*/

	/*int num1;
	scanf("%d",&num1);
	while (0 < num1 && num1 < 101) {
		printf("%d\n",num1);
		num1--;
	}						codeUp_74~75*/

	/*char end, start='a';
	scanf("%c", &end);
	while (start != end+1) {
		printf("%c",start);
		start++;
	}					codeUp_76 */

	/*int start = 0, end;
	scanf("%d", &end);
	while (start != end + 1) {
		printf("%d", start);
		start++;
	}					codeUp_77 */

	/* int start = 0, end;
	int total = 0;
	scanf("%d", &end);
	while (start != end + 1) {
		printf("%d ", start);
		start++;
		if (start % 2 == 0) {
			total += start;
		}
	}
	printf("\n%d", total);	codeUp_78 */

	/* char ch1;
	scanf("%c", &ch1);
	
	while (ch1 != 'q') {
		printf("%c", ch1);
		scanf("%c", &ch1);

	}
	printf("종료!");	codeUp_79 */
}