/*************************************************************************
	> File Name: ip.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月13日 星期日 15时30分33秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
union IP {
    uint8_t ip[4];
    uint32_t number;
};
union DOUBLE {
    uint64_t inum;
    double dnum;
};

int main() {
    union IP addr;
    union DOUBLE d;
    d.dnum = 1.0;
    printf("%d\n", PRId8);
    printf("%" PRIx64 "\n", d.inum);
    while(~scanf("%"PRId8 ".%" PRId8 ".%" PRId8 ".%" PRId8,
                addr.ip, addr.ip + 1, addr.ip + 2, addr.ip + 3))
    printf("%d\n",addr.number);

    return 0;
}
