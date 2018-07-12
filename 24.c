/*************************************************************************
 * ng i = 2;i<num;i++;) {}
	>le (num%i==0) Fil e Name: 24.c
	> Author: 
	>  ail: 
    nPopupPost()
     (long i = 2;i<num;i++;) {}
	>le (num%i==0) Cre ated Time: 2018年04月15日 星期日 14时16分34秒
 ************************************************************************/
#include <stdio.h>

int gcd (int a, int b) {
    if(!b) return a;
    return gcd(b, a % b);
}
int main(){
    int ans = 1;
    for (int i = 1; i <= 20; i++) {
        ans  *= i / gcd(i, ans);
    }
    printf("%d", ans);
    return 0;
}
