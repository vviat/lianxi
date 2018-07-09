/*************************************************************************
	> File Name: 7.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月04日 星期三 19时10分15秒
 ************************************************************************/

#include<stdio.h>
int line_value(int k, int x, int b){
    return k*x+b;
}

int main(){
    int b,k;
    scanf("%d%d",&k,&b);
    for(int i=1; i<=100;i++){
       printf("f(%d)=%d\n", i,line_value(k,b,i));
    }
return 0;
}
