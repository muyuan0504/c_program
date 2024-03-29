/*
 * @Date: 2022-08-20 09:06:46
 * @LastEditors: jimouspeng
 * @Description: 字符串, C语言处理字符串，是通过创建数组，然后数组的每项保存对应的字符，末尾以空字符\0结束。
 * @LastEditTime: 2022-08-26 21:09:25
 * @FilePath: \c_program\str.c
 */
#include <stdio.h>
#include <string.h>
/** #define -> c语言预处理器，编译程序时，所有的DENSITY都会被替换为62.4
 * 末尾不用加分号，因为这是一种由预处理器处理的替换机制
 */
#define DENSITY 62.4
int main()
{
    float weight, volume;
    // const限定符： 限定一个变量为只读
    const int hisNum = 190;
    int size, letters;

    // 声明创建一个包含40个存储单元
    // (实际空间只有39个单元，C语言下默认数组末位位置的字符为\0，标记字符串的结束)的数组，每个单元存储一个char类型的值
    char name[40];

    printf("hi, what's your first name \n");
    scanf("%s", name);
    printf("%s, what's your weight in pounds? \n", name);
    scanf("%f", &weight);
    // sizeof 以字节为单位给出对象的大小
    size = sizeof name;
    // strlen 给出字符串中的字符长度,不会包含作为结束的空字符
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("well, %s, your volume is %2.2f cubic fees. \n", name, volume);
    printf("%d letters, \n", letters);
    printf("let's sese size: %zd \n", size);
}
