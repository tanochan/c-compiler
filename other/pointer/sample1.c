#include <stdio.h>

int main(void) {
    int n1, n2, n3;
    int *p;

    // ポインタ変数pのアドレス
    printf("&p %p\n", &p); // 0x7ff7ba55428c

    n1 = 123;
    n2 = 456;

    p = &n1;
    // 変数n1のアドレス
    printf("p %p\n", p); // 0x7ff7ba55428c

    // そのアドレスに格納されている値
    printf("*p %d\n", *p); // 123

    n3 = *p; // ポインタ変数pが指す値をn3に代入
    printf("&n3 %p\n", &n3);
    printf("n3 %d\n", n3);

    n2 = *p;
    *p = 789;
    printf("p %p\n", p);
    printf("n2 %d\n", n2);
    printf("n3 %d\n", n3);

    return 0;
}