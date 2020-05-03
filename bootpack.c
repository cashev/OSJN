/* 他のファイルで作った関数がありますとCコンパイラに教える */

void io_hlt(void);

/* 関数宣言なのに、{}がなくていきなり;を書くと、
    他のファイルにあるからよろしくね、という意味になるのです。 */

void HariMain(void)
{
    int i; /* 変数宣言。iという変数は、32ビットの整数型 */
    char *p; /* pという変数は、BYTE [...]用の番地 */

    for (i = 0xa0000; i <= 0xaffff; i++) {

	    p = (char *) i; /* 番地を代入 */
	    *p = i & 0x0f;

	    /* これで write_mem8(i, i & 0x0f); の代わりになる */
    }

    for (;;) {
    	io_hlt();
    }
}
