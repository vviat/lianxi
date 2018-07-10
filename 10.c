/*************************************************************************
	> File Name: 10.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月04日 星期三 19时54分26秒
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b) {
    if(!b){
        return a;
    } else {
        return gcd(b, a%b);
    }
}
int main(){
    int a, b;
    scanf("%d%d",&a,&b);
    printf("%d",gcd(a,b));
    return 0;

}
