#include <stdio.h>
void test7_1_1()
{
	int num = 0;
	int num1;
	printf("���� ���� 1���� �Է��ϼ���: ");
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

	printf("�������� 1���� �Է��ϼ���:");
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
		printf("������ �Է��ϼ���:");
		scanf_s("%d", &num);
		result += num;
	}
	printf("%d", result);
}
void test7_2_2() {
	int num = 0;
	int num1 = 9;

	printf("���ڸ� �Է��Ͻÿ�:");
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
			printf("������ �Է��ϼ���(ī��Ʈ:%d): ", count);
			count++;
			scanf_s("%d", &in);
		}
		result = in + result;
		in = 0;

	}
	printf("�հ�: %d\n", result);
}
void test7_3_2()
{
	int dan;

	printf("�� ���� ����ұ��? :");
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
	
	printf("���ڸ� 1�� �Է��ϼ���:");
	scanf_s("%d", &n);

	for (int i=1;i<= n; i++)
	{
		result *= i;
		
	}
	printf("���� %d �Դϴ�.\n", result);
}
int main()
{
	test7_4_2();
	return 0;
}