/*************************************************************************
	> File Name: daxiao.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月13日 星期日 10时31分41秒
 ************************************************************************/

#include<stdio.h>
int f(){
    int a = 1;
    unsigned char *p = (unsigned char *)&a;//存的地址在地址地位说明是小端；
    return (*p) ^ 1;
}
int main(){
    printf("%d\n",f());//０为小端
    return 0;
}
