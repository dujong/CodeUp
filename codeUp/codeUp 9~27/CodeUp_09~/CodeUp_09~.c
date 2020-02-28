#include <stdio.h>

void main() {
	/*int n;			//codeUp_10
	scanf("%d",&n);
	printf("%d",n);*/

	/*char x;			//codeUp_11
	scanf("%c",&x);
	printf("%c",x);*/

	/*float f;
	scanf("%f",&f);
	printf("%f", f);*/	//codeUp_12

	/*int num1, num2;
	printf("두 개의 정수를 입력해주세요 :");
	scanf("%d %d",&num1,&num2);
	printf("%d %d",num1,num2);*/ //codeUp_13

	/*char x, y;	
	printf("두 개의 문자를 입력해주세요 :");
	scanf("%c %c",&x,&y);
	printf("%c %c",y,x);*/	//codeUp_14

	/*float f1;
	scanf("%f",&f1);
	printf("%.2f",f1);*/	//codeUp_15

	/*int i;
	scanf("%d", &i);
	printf("%d %d %d",i,i,i);*/		//codeUp_17

	/*int i, j;
	printf("min:sec 으로 시간을 입력해주세요 :");
	scanf("%d:%d",&i,&j);
	printf("%d:%d",i,j);	codeUp_18*/

	/*int year, mon, day;
	scanf("%d,%d,%d", &year, &mon, &day);
	printf("%d,%d,%d",year,mon,day);	codeUp_19*/

	/*int x, y;
	scanf("%d-%d", &x, &y);
	printf("%d-%d",x,y);	codeUp_20*/

	/*char str[50];
	scanf("%s",str);
	printf("%s", str);	codeUp_21*/

	/*char data[2001];
	fgets(data, 2000, stdin);
	printf("%s",data);	codeUp_22*/

	/*int i, j;
	scanf("%d.%d",&i,&j);
	printf("%d\n.%d",i,j);	codeUp_23*/

	/*char str[50];
	scanf("%s",str);
	for (int i = 0; str[i]!='\0'; i++) {
		printf("'%c'\n",str[i]);	
	}							codeUp_24*/

	/*int a, b, c, d, e;
	scanf("%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e);
	printf("%d %d %d %d %d",a,b,c,d,e);		codeUp_25 */

	/*int h, m, s;
	scanf("%d:%d:%d",&h,&m,&s);
	if (h > 24 || m > 60 || s > 60) {
		printf("잘못 입력되었습니다\n");
	}
	else {
		printf("%d:%d:%d\n", h, m, s);
	}						codeUp_26*/

	int y, m, d;
	scanf("%d.%d.%d",&y,&m,&d);
	printf("%02d-%02d-%04d",d,m,y);

}