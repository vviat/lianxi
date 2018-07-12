/*************************************************************************
	> File Name: 23.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月11日 星期三 20时31分09秒
 ************************************************************************/

#include<stdio.h>
#define MAX(a,b) ({\
                   __typeof(a) __a=(a);\
                   __typeof(b) __b=(b);\
                   (__a)>(__b)?(__a):(__b);\
                  })
#define p(s) printf("%s = %d\n",#a,a)
int main(){
    int a=7;
p(MAX(2,3);
printf("%d",typeof(a));
printf("%d\n",MAX(2,3) );
printf("%d\n",5+MAX(2,3) );
printf("%d\n",MAX(2,MAX(3,4)) );
    printf("%d\n",MAX(2,3>4?3:4) );
printf("%d\n",MAX(a++,6) );
}
