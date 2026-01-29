#include<iostream>
#include <stdio.h>  // 包含输入输出函数头文件
int main() {
    int x[3][2] = { 0 };  // 二维数组初始化，所有元素置0
    int i;              // 循环变量定义
    // 循环3次，给x[0][0]、x[1][0]、x[2][0]赋值
    for (i = 0; i < 3; i++) {
        scanf_s("%d", x[i]);  // x[i]等价于&x[i][0]，为列首地址
    }
    // 3位宽度格式化输出指定数组元素
    printf("%3d%3d%3d\n", x[0][0], x[0][1], x[1][0]);
    return 0;
}