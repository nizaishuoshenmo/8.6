#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int a = 10;
	int arr[] = { 1,2,3,4,5,6 };
	printf("%d\n", sizeof(a));//�����������������Ϊ4
	printf("%d\n", sizeof(a));//�����������������Ϊ4
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);//�ڱ����������ʡ�ԣ���
	printf("%d\n", sizeof int);//�����Ǵ����
	return 0;
}
//int main()
//{
//	int a = 10;
//	int b =a++;//��ʹ�ú��
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = ++a;//�ȼӺ�ʹ��
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