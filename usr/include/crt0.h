/*
 * TacOS Source Code
 *    Tokuyama kousen Advanced educational Computer
 *
 * Copyright (C) 2008-2016 by
 *                      Dept. of Computer Science and Electronic Engineering,
 *                      Tokuyama College of Technology, JAPAN
 *
 *   上記著作権者は，Free Software Foundation によって公開されている GNU 一般公
 * 衆利用許諾契約書バージョン２に記述されている条件を満たす場合に限り，本ソース
 * コード(本ソースコードを改変したものを含む．以下同様)を使用・複製・改変・再配
 * 布することを無償で許諾する．
 *
 *   本ソースコードは＊全くの無保証＊で提供されるものである。上記著作権者および
 * 関連機関・個人は本ソースコードに関して，その適用可能性も含めて，いかなる保証
 * も行わない．また，本ソースコードの利用により直接的または間接的に生じたいかな
 * る損害に関しても，その責任を負わない．
 *
 *
 */

/*
 * include/crt0.h : lib/crt0.s の外部インタフェース
 *
 * 2015.06.17  _sp() を追加
 * 2015.06.08　新規作成
 *
 * $Id$
 */


// C-- をサポートする関数
public int    _AtoI(void[] a);                      // 型変換ルーチン
public void[] _ItoA(int a);                         // 型変換ルーチン
public void[] _addrAdd(void[] a, int i);            // アドレス計算
public int    _uCmp(int a, int b);                  // 符号無しの大小比較
public int    _aCmp(void[] a, void[] b);            // アドレスの大小比較
public void[] _args();                              // 関数の引数配列を返す
public int    _sp();                                // 現在の SP の値を返す


