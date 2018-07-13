/*************************************************************************
	> File Name: morencanshu.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月13日 星期日 11时27分15秒
 ************************************************************************/
//c 语言默认参数怎么写
//#c 转字符　【０】是第一位，(#c)[0] 是判断第一位是不是/0　是的话说明是空值
#include<stdio.h>
#define DEFAUT_ARG(c, value) (#c)[0] ? c : value
#define  add(a, b, c) _add(a, b, DEFAUT_ARG(c, 5))

int _add(int a, int b, int c){
    return a+b+c;
}

int main() {
    printf("%d\n", add(1,2));
    printf("%d\n", add(1,2,3));
    return 0;
}
