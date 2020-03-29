//#include<math.h>
//#include<string.h>
//#include<math.h>
#include<windows.h>
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{

}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	char *s = "c:\code\test:c";
//	printf("%d\n", sizeof(s));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("hello ");
//	case 2:
//		printf("world！\n");
//	default:
//		printf("error\n");
//	}
//	/*printf("\'A\'");
//	return 0;*/
//	return 0;
//}
//int main()
//{
//	int score = 0;
//	printf("请输入你的成绩：");
//	scanf("%d", &score);
//	switch (score/10)
//	{
//	case 10:
//	case 9:
//		printf("优\n");
//		break;
//	case 8:
//		printf("良\n");
//		break;
//	case 7:
//		printf("中\n");
//		break;
//	case 6:
//		printf("及格\n");
//		break;
//	case 5:
//		printf("差\n");
//		break;
//	default:
//		printf("ERROR\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i / 2; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j >= i / 2)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("请输入要检验的数：");
//	scanf("%d", &i);
//	for (j = 2; j < i / 2; j++)
//	{
//		if (i%j == 0)
//		{
//			printf("%d不是素数\n", i);
//			break;
//		}
//		else
//		{
//			printf("%d是素数\n", i);
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0; 
//	char input[123] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", &input);
//		if (strcmp(input, "123456") == 0)
//		{
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入！\n");
//		}
//	}
//	if (i < 3)
//	{
//		printf("登录成功！\n");
//	}
//	else
//	{
//		printf("退出登录！\n");
//	}
//	return 0;
//}
//#include<stdlib.h>
//int max(int x,int y)
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	if (x > y)
//	{
//		return x;
//	}
//	else  
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int result = 0;
//	result = max(a,b);
//	printf("%d\n", result);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("haha\n");
//		}
//	}
//	else
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	   if (b == 2)
//		printf("haha\n");
//	else
//		printf("hehe\n");
//}
//int main()
//{
//	//printf("\a");
//	/*printf('\'');
//	printf("\"");*/
//	//printf("c:\test\328\test.c");
//	/*printf("\a");*/
//	/*printf("a\???\\\ttest\n");
//	printf("a\n");
//	printf("a\n");
//	printf("a\n");*/
//
//	/*char a1[] = "bit";
//	char a2[] = { 'b', 'i', 't' };
//	char a3[] = { 'b', 'i', 't', '\0' };
//	printf("%s\n", a1);
//	printf("%s\n", a2);
//	printf("%s\n", a3);*/
//	/*char *s = "abc";
//	printf("%d\n", s);
//	printf("%d\n", "abc");*/
//	//printf("%d\n", sizeof("A"));
//	//printf("hello bit\n");
//	//system("pause");
//	return 0;
//}
//int main()
//{
//	char a[] = "abcdef";
//	char *p = "abcdef";
//	printf("%s\n", a);
//	printf("%s\n", p);
//	return 0;
//}
//int main()
//{
//	const int x = 100;
//	x = 200;
//}
//int main()
//{
//	10;
//	int x = 10;
//	printf("%d\n", x);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", 23);
//	return 0;
//}
//int main()
//{
//	const int a = 34;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入对应的数据：");
//	scanf("%d %d", &x, &y);
//	int sum = 0;
//	sum = x + y;
//	printf("%d\n", sum);
//	return 0;
//}
//#define a 100
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}
//int global = 100;
//int main()
//{
//	int x = 200;
//	int global = 300;
//	printf("%d,%d\n", x,global);
//	return 0;
//}
//int main()
//{
//	int high = 149;
//	float money = 1.9f;
//	char phone[12] = "1234567890";
//}
//enum sex
//{
//	male,
//	female,
//	secret
//};
//int main()
//{
//	printf("%d\n", male);
//	return 0;
//}
//int main()
//{
//	double pi = 3.14;
//	double r = 2;
//	printf("%f\n", pi*r*r);
//	return 0;
//}
//int main()
//{
//	char c = 'A';
//	for (; c <= 'Z'; c++)
//	{
//		printf("%c ", c);
//	}
//	return 0;
//}
//int main()
//{
//	printf("%d\n", 2);
//	return 0;
//}
//int main()
//{
//	char a = 'w';
//	int b = 9;
//	float c = 4.5;
//	printf("%c\n", a);
//	printf("%d\n", b);
//	printf("%f\n", c);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(int));4
//	printf("%d\n", sizeof(char));1
//	printf("%d\n", sizeof(long));4
//	printf("%d\n", sizeof(short));2
//	printf("%d\n", sizeof(float));4
//	printf("%d\n", sizeof(double));8
//	printf("%d\n", sizeof(long long));8
//  printf("%d\n", sizeof(long double));8
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int mul = 0;
//	mul = a*b;
//	printf("%d\n", mul);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("hello bit\n");
//	system("pause");
//	return 0;
//}
//int main()
//{
//	printf("hello world!\n");
//	return 0;
//}
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	printf("电脑将在一分钟内关机，如果输入：我是仙女，则取消关机。\n");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是仙女"))
//	{
//		system("shutdown -a");
//	}
//	return 0;
//}
//int main()
//{
//	char input[120] = { 0 };
//	system ("shutdown - s - t 120");
//	printf("电脑将在两分钟之内关机，请说出秦霄贤取消关机！\n");
//	scanf("%s", input);
//	if (strcmp(input, "秦霄贤") == 0)
//	{
//		system ("shutdown - a");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	float x = 0;
//	float y = 0;
//	char c1 = 0;
//	char c2 = 0;
//	/*scanf("%d%d", &a, &b);*/
//	/*scanf("%f%f", &x, &y);*/
//	scanf("%c%c", &c1, &c2);
//	/*printf("a=%d,b=%d\n", a, b);*/
//	/*printf("x=%.2f,y=%.2f\n", x, y);*/
//	printf("c1=%c,c2=%c\n", c1, c2);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", i);
//		Sleep(10);
//		system("cls");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", i);
//		//Sleep(10);
//		system("cls");
//	}
//	return 0;
//}
//void find_diff_num(int a[], int sz, int *x, int *y)
//{
//	//所有数异或
//	int num = 0;
//	int t = 0;
//	int pos = 0;
//	for (t = 0; t < sz; t++)
//	{
//		num ^= a[t];
//	}
//	//找出num中二进制1的位置
//	for (t = 0; t < 32; t++)
//	{
//		if (((num >> t) & 1) == 1)
//		{
//			pos = t;
//			break;
//		}
//	}
//	//按照pos位为1或0分组
//	for (t = 0; t < sz; t++)
//	{
//		if (((a[t] >> pos) & 1) == 1)
//		{
//			*x^=a[t];
//		}
//		else
//		{
//			*y ^= a[t];
//		}
//	}
//}
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 4, 3, 2, 1 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	int j = 0;
//	find_diff_num(a, sz, &i, &j);
//	printf("%d %d\n", i, j);
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	x = x^y;
//	y = y + x;
//	printf("%d %d\n", x, y);
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	x = x + y;
//	y = x - y;
//	x = x - y;
//	printf("%d %d\n", x, y);
//	return 0;
//}
//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	x = x^y;
//	y = x^y;
//	x = x^y;
//	printf("%d %d\n", x, y);
//	return 0;
//}
//int main()
//{
//	char a = 1;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	double x = 0;
//	scanf("%lf", &x);
//	double y = 0;
//	y = 10.0 * sin(x);
//	printf("%.4lf\n", y);
//	return 0;
//}
//int main()
//{
//	float x = 0;
//	scanf("%d", &x);
//	float y=0;
//	y = sin(x);
//	printf("%f\n", y);
//	return 0;
//}
//int main()
//{
//	float x;
//	scanf("%f", &x);
//	printf("%f\n", sin(float_(x));
//	return 0;
//}
//{
//	int ret = strcmp("abcdef", "aaaaa");
//	if (ret == 0)
//	{
//		printf("二者相等\n");
//	}
//	if (ret > 0)
//	{
//		printf("前者大\n");
//	}
//int main()
//{
//	float r ;
//	scanf("%f", &r);
//	float s;
//	s = 3.14*r*r;
//	printf("s=%f\n",s );
//	return 0;
//}
//in//	if (ret < 0)
//	{
//		printf("后者大\n");
//	}
//	return 0;
//}
//int main()
//{
//	char a[20] = { "all over" };
//	strcat(a, " the world");
//	printf("%s\n", a);
//	return 0;
//}
//int main()
//{
//	char a1[20] = { 0 };
//	strcpy(a1, "hello world");
//	printf("%s\n", a1);
//	return 0;
//}
//int main()
//{
//	int ret = strcmp("abcdef", "abcdeee");
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	int sum = 0;
//	a++;
//	++b;
//	--c;
//	sum = a + b + c;
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	char a1[] = { "abcdefg" };
//	char a2[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
//	printf("%s\n", a1);
//	printf("%s\n", a2);
//	return 0;
//}
//int main()
//{
//	char a1[] = {"abcdefg"};
//	char a2[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
//	printf("%d\n", sizeof(a1));
//	printf("%d\n", sizeof(a2));
//	return 0;
//}
//int main()
//{
//	int i = 97;
//	int j = 0;
//	for (j = 0; j < 26;j++)
//	{
//		Sleep(10);
//		system("cls");
//		printf("%c\n", i);
//		i++;
//	}
//	return 0;
//}
//int main(void)
//{
//	printf("%d\n", sizeof(char[2]));
//	printf("%d\n", sizeof(char &));
//	return 0;
//}
//int main()
//{
//	int a = 0; 
//	for (a = 0; a <= 100; a++)
//	{
//		Sleep(10);
//		system("cls");
//		printf("%d\n", a);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	scanf("%d%d", &i, &j);
//	sum = i + j;
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 3, 2, 1 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= a[i];
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 4, 3, 2, 1 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (a[i] == a[j])
//				count++;
//		}
//		if (count == 1)
//		{
//			printf("%d\n", a[i]);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf_s("%d %d", &i, &j);
//	int mul = 0;
//	mul = i*j;
//	printf("mul=%d\n", mul);
//	return 0;
//}
//int main()
//{
//	int i = 10;
//	int j = 20;
//	i = i^j;
//	j = i^j;
//	i = i^j;
//	printf("%d %d\n", i, j);
//	return 0;
//}
//void swap(int *x,int *y)
//{
//	int t = *x;
//	*x = *y;
//	*y = t;
//}
//int main()
//{
//	int i = 30;
//	int j = 20;
//	swap(&i, &j);
//	printf("%d %d\n", i, j);
//	return 0;
//}
//int main()
//{
//	int i = 30;
//	int j = 20;
//	int t = 0;
//	t = i;
//	i = j;
//	j = t;
//	printf("%d %d\n", i, j);
//	return 0;
//}
//int main()
//{
//	printf("hello world!\n");
//	printf("hello bit!\n");
//
//	system("pause");
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf_s("%d%d",&i, &j);
//	int sum = 0;
//	sum = i + j;
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a+0));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a+1));
//	printf("%d\n", sizeof(a[1]));
//	printf("%d\n", sizeof(&a));
//	printf("%d\n", sizeof(*&a));
//	printf("%d\n", sizeof(&a+1));
//	printf("%d\n", sizeof(&a[0]));
//	printf("%d\n", sizeof(&a[0]+1));
//	return 0;	
//}
////int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j >= i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f' ,'\0'};
//	printf("%s\n", "abcdef");
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(short));
//}
//int main()
//{
//	int num1;
//	int num2;
//	scanf_s("%d%d", &num1, &num2);
//	int sum = 0;
//	sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 4;
//	int c;
//	c = (a++, --b, --a, b++, a + b);
//	printf("%d\n", c);
//	return 0;
//}
//void sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j + 1;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int fun(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*fun(n - 1);
//	}
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	scanf_s("%d", &i);
//	ret = fun(i);
//	printf("%d\n", ret);
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	print(num);
//	return 0;
//}
//int main()
//{
	//printf("%d", 43);    43
	//printf("%d",printf("%d", 43));   432
	//printf("%d", printf("%d", printf("%d", 43)));    4321
	/*return 0;
}*/
//void new_line()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[20] = { 0 };
//	printf("%d\n", strlen(strcpy_s(arr2, arr1)));
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("abc"));
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (n= 0; n < 100; n++)
//	{
//		i++;
//	    printf("%d\n", i);
//		Sleep(10);
//		system("cls");//清屏
//	}
//	return 0;
//}
//int sum(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//		return x + sum(x - 1);
//}
//int main()
//{
//	int n = sum(100);
//	printf("%d\n", n);
//	Sleep(1000);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	if (i < 100)
//	{
//		i++;
//	}
//	printf("%d", i);
//	Sleep(100);
//	return 0;
//}
////int fun(int x)
//{
//	return x++;
//}
//int main()
//{
//	int i = 0;
//	printf("%d\n", fun());
//	Sleep(100);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf_s("%s", password);
//		if (0 == strcmp(password, "123456"))
//		{
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入！\n");
//		}
//	}
//	if (i < 3)
//	{
//		printf("登录成功！\n");
//	}
//	else
//	{
//		printf("退出登录！\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		printf("%d\n", i);
//		Sleep(100);
//	} while (i <= 100);
//	return 0;
//}
//void Inc(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Inc(&num);
//	printf("%d\n", num);
//	return 0;
//}
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy_s(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			continue;
//			printf("%d ", i);
//			i++;
//		}
//		/*else
//		{
//			
//		}*/
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf_s("%s", password);
//		if (0 == strcmp(password, "123456"))
//		{
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入!\n");
//		}
//	}
//	if (i < 3)
//	{
//		printf("登录成功！\n");
//	}
//	else
//	{
//		printf("退出登录！\n");
//	}
//	return 0;
//}
//int main()
//{
//	int age = 0;
//	scanf_s("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年\n");
//	}
//	else
//	{
//		printf("未成年\n");
//	}
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[15];
//};
//
//int main()
//{
//	struct Stu s1 = { "zhangsan", 20, "男", "123456" };
//	struct Stu s2 = { "lisi", 25, "女", "789021" };
//	printf("%s %d %s %s\n", s1.name, s1.age, s1.sex, s1.id);
//	return 0;
//}
//#define ADD(x,y)((x)+(y))
//

//int main()
//{
//	/*int num = 10;
//	int *p = &num;
//	*p = 20;
//	printf("%d\n", num);*/
//	char ch = 'w';
//	char *pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
//	int a = 100;
//	int b = 200;
//	int sum = ADD(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			printf("%d*%d=%2d ", a, b, a*b);
//		}
//		printf("\n");
//	}
//	return 0;
//}