#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int a = 10;
	int arr[] = { 1,2,3,4,5,6 };
	printf("%d\n", sizeof(a));//由于是在这个环境故为4
	printf("%d\n", sizeof(a));//由于是在这个环境故为4
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);//在变量是这可以省略（）
	printf("%d\n", sizeof int);//这种是错误的
	return 0;
}
//int main()
//{
//	int a = 10;
//	int b =a++;//先使用后加
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = ++a;//先加后使用
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//			printf("hehe\n");
//	}