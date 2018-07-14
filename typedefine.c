/*************************************************************************
	> File Name: typedefine.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月13日 星期日 17时20分56秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>

#define pchar char *
int main() {
    pchar p = "hello world", q;
    printf("%d %d\n", sizeof(p),sizeof(q));

    return 0;
}
