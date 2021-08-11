#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char* c[] = { "ENTER","NEW","POINT","FIRST" };
    char** cp[] = { c + 3,c + 2,c + 1,c };
    char*** cpp = cp;
    printf("%s\n", **++cpp);
    printf("%s\n", *-- * ++cpp + 3);
    printf("%s\n", *cpp[-2] + 3);
    printf("%s\n", cpp[-1][-1] + 1);
    return 0;
}
//int main()
//{
//    int arr[] = { 0 };
//    int* p = arr;
//    printf("%d\n", p);
//    printf("%d", p + 1);
//}
//int main()
//{
//    char* a[] = { "work","at","alibaba" };//存进来的是waa这三个首字符的地址
//    char** pa = a;
//    pa++;
//    printf("%s\n", *pa);
//    return 0;
//}
//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);//用内存的方式来看更好
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//}
//struct Test
//{
//    int Num;
//    char* pcName;
//    short sDate;
//    char cha[2];
//    short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{     
//    p = (struct Test*)0x100000;
//    printf("%p\n", p + 0x1);
//    printf("%p\n", (unsigned long)p + 0x1);//变化为整数加一
//    printf("%p\n", (unsigned long*)p + 0x1);//指针类型是long需要加四
//    printf("%p\n", (unsigned int*)p + 0x1);
//    return 0;
//}
//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//    printf("%x,%x", ptr1[-1], *ptr2);
//    return 0;
//}
//
//int main()
//{
//    printf("%d\n", sizeof(a));
//    printf("%d\n", sizeof(a + 0));
//    printf("%d\n", sizeof(*a));
//    printf("%d\n", sizeof(a + 1));
//    printf("%d\n", sizeof(a[1]));
//    printf("%d\n", sizeof(&a));
//    printf("%d\n", sizeof(*&a));
//    printf("%d\n", sizeof(&a + 1));
//    printf("%d\n", sizeof(&a[0]));
//    printf("%d\n", sizeof(&a[0] + 1));
//    //字符数组
//    char arr[] = { 'a','b','c','d','e','f' };
//    printf("%d\n", sizeof(arr));
//    printf("%d\n", sizeof(arr + 0));
//    printf("%d\n", sizeof(*arr));
//    printf("%d\n", sizeof(arr[1]));
//    printf("%d\n", sizeof(&arr));
//    printf("%d\n", sizeof(&arr + 1));
//    printf("%d\n", sizeof(&arr[0] + 1));
//    printf("%d\n", strlen(arr));
//    printf("%d\n", strlen(arr + 0));
//    printf("%d\n", strlen(*arr));
//    printf("%d\n", strlen(arr[1]));
//    printf("%d\n", strlen(&arr));
//    printf("%d\n", strlen(&arr + 1));
//    printf("%d\n", strlen(&arr[0] + 1));
//    char arr[] = "abcdef";
//    printf("%d\n", sizeof(arr));
//    printf("%d\n", sizeof(arr + 0));
//    printf("%d\n", sizeof(*arr));
//    printf("%d\n", sizeof(arr[1]));
//    printf("%d\n", sizeof(&arr));
//    printf("%d\n", sizeof(&arr + 1));
//    printf("%d\n", sizeof(&arr[0] + 1));
//    printf("%d\n", strlen(arr));
//    printf("%d\n", strlen(arr + 0));
//    printf("%d\n", strlen(*arr));
//    printf("%d\n", strlen(arr[1]));
//    printf("%d\n", strlen(&arr));
//    printf("%d\n", strlen(&arr + 1));
//    printf("%d\n", strlen(&arr[0] + 1));
//    char* p = "abcdef";
//    printf("%d\n", sizeof(p));
//    printf("%d\n", sizeof(p + 1));
//    printf("%d\n", sizeof(*p));
//    printf("%d\n", sizeof(p[0]));
//    printf("%d\n", sizeof(&p));
//    printf("%d\n", sizeof(&p + 1));
//    printf("%d\n", sizeof(&p[0] + 1));
//    printf("%d\n", strlen(p));
//    printf("%d\n", strlen(p + 1));
//    printf("%d\n", strlen(*p));
//    printf("%d\n", strlen(p[0]));
//    printf("%d\n", strlen(&p));
//    printf("%d\n", strlen(&p + 1));
//    printf("%d\n", strlen(&p[0] + 1));
//    //二维数组
//    int a[3][4] = { 0 };
//    printf("%d\n", sizeof(a));
//    printf("%d\n", sizeof(a[0][0]));
//    printf("%d\n", sizeof(a[0]));
//    printf("%d\n", sizeof(a[0] + 1));
//    printf("%d\n", sizeof(*(a[0] + 1)));
//    printf("%d\n", sizeof(a + 1));
//    printf("%d\n", sizeof(*(a + 1)));
//    printf("%d\n", sizeof(&a[0] + 1));
//    printf("%d\n", sizeof(*(&a[0] + 1)));
//    printf("%d\n", sizeof(*a));
//    printf("%d\n", sizeof(a[3]));
//    return 0;
//}