#include <stdio.h>

int main(void)
{
	// ローカル変数の定義
    // スタックメモリに配置される
	long	num1 = 100;
	long	num2 = 200;

	printf("%ld %ld", num1, num2);

	return 0;
}