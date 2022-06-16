#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int *addr;
    addr = (int*)malloc(4);

    // 確保してメモリ領域の先頭アドレス
    // 確保できなかった場合はNULLを返す
    printf("addr %p\n", addr);

    printf("sizeof(addr) %ld", sizeof(addr));
    return 0;
}