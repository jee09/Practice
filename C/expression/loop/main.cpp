#include <stdio.h>
void test7_1_1()
{
	int num = 0;
	int num1;
	printf("양의 정수 1개를 입력하세요: ");
	scanf_s("%d", &num1);

	while (num < num1) {
		printf("Hello World!\n");
		num++;

	}

}
void test7_1_2()
{
	int num = 0;
	int num1 = 1;
	int num3;

	printf("양의정수 1개를 입력하세요:");
	scanf_s("%d", &num3);

	while (num < num3) {

		printf("%d\n", 3 * num1);
		num++;
		num1++;
	}

}
void test7_2_1() {
	int num = 1;
	int result = 0;

	while (num != 0) {
		printf("정수를 입력하세요:");
		scanf_s("%d", &num);
		result += num;
	}
	printf("%d", result);
}
void test7_2_2() {
	int num = 0;
	int num1 = 9;

	printf("숫자를 입력하시오:");
	scanf_s("%d", &num);

	while (0 < num1) {
		printf("%d x %d = %d\n", num, num1, num * num1);
		num1--;
	}

}
void test7_3_1()
{
	int in = 1;
	int count = 0;
	int result = 0;

	while (count < 5) {
		while (in <= 0) {
			printf("정수를 입력하세요(카운트:%d): ", count);
			count++;
			scanf_s("%d", &in);
		}
		result = in + result;
		in = 0;

	}
	printf("합계: %d\n", result);
}
void test7_3_2()
{
	int dan;

	printf("몇 단을 계산할까요? :");
	scanf_s("%d", &dan);


	for (int num = 1; num < 10; num++) {
		printf("%d x %d = %d\n", dan, num, num * dan);
	}

}
void test7_4_1() 
{
	int num1, num2;
	int result = 0;
	scanf_s("%d %d", &num1, &num2);
	for (int i = num1; i <= num2; i++)
	{
		result += i;
	}
	printf("%d\n", result);

}
void test7_4_2() {

	int n;
	int result = 1;
	
	printf("숫자를 1개 입력하세요:");
	scanf_s("%d", &n);

	for (int i=1;i<= n; i++)
	{
		result *= i;
		
	}
	printf("값은 %d 입니다.\n", result);
}
int main()
{
	test7_4_2();
	return 0;
}