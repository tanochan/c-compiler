コンパイラ作成
===
参考: https://www.sigbus.info/compilerbook

実行例
`docker run --rm -v $HOME/c/step1:/step1 -w /step1 compilerbook cc -o assm assm.s`