/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月02日 星期一 18时09分11秒
 ************************************************************************/

#include<stdio.h>
int main(){
    char str[1000];
    while (scanf("%10[^\n]s", str)!=EOF){
        getchar();
        printf("printf %d", printf("%s\n" , str));
    }
    return 0;
}
