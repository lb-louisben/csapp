#include <stdio.h>

// 告诉编译器：外部有这两个函数（在别的文件func.c里）
void printMessage();
int getNumber();

int main() {
    // 调用func.c中的函数
    printMessage();

    int num = getNumber();
    printf("Number from getNumber() is: %d\n", num);

    return 0;
}

