/*************************************************************************
	> File Name: struct.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月13日 星期日 16时54分42秒
 ************************************************************************/
//结构体大小
#include<stdio.h>
#include<inttypes.h>

#define offset(T,name) (int)(int64_t)(&(((T *)(NULL))->name)) 
struct Node {
    char a;
    int b;
    char c;
    uint16_t d;  // 偶数对齐
    char e;
};

int main() {
    printf("%d\n" , sizeof(uint16_t));
    printf("%d\n",offset(struct Node, a));
    printf("%d\n",offset(struct Node, b));
    printf("%d\n",offset(struct Node, c));
    printf("%d\n",offset(struct Node, d));
    printf("%d\n",offset(struct Node, e));
    printf("%d\n", sizeof(struct Node));
    return 0;
}
