/*************************************************************************
	> File Name: 12.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月04日 星期三 20时34分22秒
 ************************************************************************/

#include<stdio.h>
#include<stdarg.h>
int max_int(int num, ...){
    int ans = 0, temp;
    va_list arg;
    va_start(arg, num);
    while (num--){
        temp = va_arg(arg, int);
        if (temp >ans) ans = temp;
}
    va_end(arg);
    return ans;
}

int main(){
    printf("%d\n",max_int(3,1,5,3));
    printf("%d\n",max_int(2,1,3));
    return 0;
}
