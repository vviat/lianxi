/*************************************************************************
	> File Name: 20.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月11日 星期三 18时31分24秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int i=5,j=6,k=7;
    int *ip1=&i;
    int *ip2=&j;
    int **ipp=&ip1;
    printf("ipp=%p\n",ipp);
    printf("ip1=%p\n",ip1);
    printf("ip2=%p\n",ip2);
    printf("%d\n",**ipp);
    *ipp=ip2;
    printf("%d\n",**ipp);
    
}
