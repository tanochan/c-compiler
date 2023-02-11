低レイヤー　マナブ
===
参考: https://www.sigbus.info/compilerbook

実行例
`docker run --rm -v $HOME/c/step1:/step1 -w /step1 compilerbook cc -o assm assm.s`

# 必要知識
## メモリ
### スタック
スタックメモリは、関数内で定義されたローカル変数が配置されるメモリ

https://monozukuri-c.com/langc-stack-memory/

## CPU
### レジスタ
主なx64レジスタまとめ

https://tryunoo.hatenablog.com/entry/2017/10/15/220724

## C言語
https://daeudaeu.com/
