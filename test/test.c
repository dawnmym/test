#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

//void menu()
//{
//	printf("#######################\n");
//	printf("####1. play   0. exit##\n");
//	printf("#######################\n");
//}
//
//void game()
//{
//	int guess = 0;
//	int ret = rand()%100+1;
//	while(1)
//	{
//		printf("请猜数字\n");
//		scanf_s("%d", &guess);
//		if(guess>ret)
//		{
//			printf("猜大了\n");
//		}_CRT_SECURE_NO_WARNINGS
//		else if(guess<ret)
//		{
//			printf("猜小了\n");
//		}
//		else 
//		{
//			printf("答对了\n");
//			break;
//		}
//	}
//}
//
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x < y)
//		return y;
//	else
//		return x;
//}
//int main()
//{
//	int num1 = 20;
//	int num2 = 10;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 < num2)
//		printf("%d\n", num2);
//	else
//		printf("%d", num1);
//	
//	return 0;
//}
//int main()
//{
//    int fahr = 150;
//    int celsius = 5 * (fahr - 32) / 9;
//    printf("fahr=%d,celsius=%d", fahr, celsius);
//    return 0;
//}
//int main()
//{
//    int height = 10 * 3 * 3/2;
//    printf("height = %d", height);
//    return 0;
//}

//int main()
//{
//    int x = 0;
//    scanf("%d", &x);
//    int c = 5 * (x - 32) / 9;
//    printf("Celsius = %d", c);
//    return 0;
//}
//int main()
//{
//	int A = 0;
//	int B = 0;
//	scanf("%d %d", &A, &B);
//	printf("%d + %d= %d\n", A, B, A + B);
//	printf("%d - %d= %d\n", A, B, A - B);
//	printf("%d * %d= %d\n", A, B, A * B);
//	printf("%d / %d= %d\n", A, B, A / B);
//	return 0;
//
//}
//int main()
//{
//	double x = 0;
//	double y = 0;
//	scanf("%lf", &x);
//		if (x != 0)
//		{
//			y = 1 / x;
//         }
//		else
//		{
//			y = 0;
//		}
//		printf("f(% .1f) =%.1f", x, y);
//		return 0;
//}

//int main()
//{
//	double x = 0;
//	double y = 0;
//	scanf("%lf", &x);
//	if (x >= 0)
//	{
//		y = sqrt(x);
//		printf("f(%.2f) = %.2f",x,y);
//	}
//	else
//	{
//		y = pow((x + 1), 2) + 2 * x + 1 / x;
//		printf("f(%.2f) = %.2f", x, y);
//	}
//	return 0;
//}

//int main()
//{
//	int lower = 0;
//	int upper = 0;
//	int fahr = 0;
//	double celsius = 0.0;
//	scanf("%d %d", &lower, &upper);
//	if (lower <= upper && upper<=100)
//	{
//		printf("fahr celsius\n");
//		for (fahr = lower; fahr <= upper;fahr +=2)
//		{
//			celsius = 5.0 * (fahr - 32) / 9;
//			printf("%d%6.2f\n", fahr, celsius);
//		} 
//	}
//	else
//	{
//		printf("Invalid.");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int flag = -1;
//	double sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1;i <= n*3;i+=3)
//	{
//		flag = -flag;
//		sum += flag*1.0 / i;
//	}
//	printf("sum = %.3f\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0;i <= n;i++)
//	{
//		a = pow(3, i);
//		printf("pow(3,%d)=%d\n", i, a);
//	}
//	return 0;
//}

//double fact(int n)
//{
//	int i = 0;
//	int b = 1;
//	for (i = 1;i <= n; i++)
//	{
//		b = b * i;
//	}
//	return b;
//}
//int main()
//{
//	double result = 0;
//	double a = 0;
//	double b = 0;
//	double c = 0;
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	a = fact(n);
//	b = fact(m);
//	c = fact(n - m);
//	result = a / (b * c);
//	printf("%f", result);
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
	//double d = 3.141;
	//double* pd = &d;
	//printf("%d\n", sizeof(pd));
	//*pd = 5.5;
	//printf("%f\n", *pd);
	//return 0;
//}

//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "c语言程序设计",55 };
//	struct Book* pb = &b1;
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	/*printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);*/
//	/*printf("书名:%s\n", b1.name);
//	printf("价格:%d\n", b1.price);
//	b1.price = 15;
//	printf("修改后的价格:%d\n", b1.price);*/
//	return 0;
//}

//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int f(int x, int y)
//{
//	printf("%d %d", x,y);
//}
//int main()
//{
//	int i = 2;
//	f(i,i++);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

my_strlen()
{

}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("len=%d\n", len);
	return 0;
}