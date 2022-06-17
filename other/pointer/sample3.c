#include <stdio.h>
#include <stdlib.h>

int main(void){
	char *ch;

	//メモリ確保
	ch = (char*)malloc(100);

	puts("文字列を入力してください。");

	gets(ch);

	printf("入力した文字は→%s\n",ch);

	//解放
	free(ch);

	return 0;
}