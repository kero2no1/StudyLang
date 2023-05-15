'''
Created on 2023/05/15

@author: Keroichi.T
'''

# importの書式
# import モジュール名 as エイリアス
# from パッケージ名(モジュール名) import モジュール名(クラス名やメソッド名)

# モジュールは関数やクラスをまとめたもの
# パッケージはモジュールを集めたもの
# パッケージには「__init__.py」が必要
# importでパッケージ名を指定する場合、
# パッケージ内の「__init__.py」を参照する

# 同一フォルダ内からのモジュールの呼出し
import a,b,c

# パッケージを指定してからモジュールの呼出し
from q import d

# ワイルドカードを使う場合、パッケージ内の
# __init__.pyに__all__を定義する必要がある
from q.r import *
from q.r.f import F     # クラスをimport

# パッケージの階層はドットで分ける
import s.t.u.g
from s.t.u import h

def main():
    aa = a.A()
    bb = b.B()
    cc = c.C()
    aa.a1()
    bb.b1()
    cc.c1()
    
    dd = d.D()
    dd.d1()
    
    ee = e.E()
    ff = F()            # クラスを使う時にモジュール名を指定する必要がない
    ee.e1()
    ff.f1()
    
    # import とfrom import
    gg = s.t.u.g.G()
    hh = h.H()
    gg.g1()
    hh.h1()

if __name__ == '__main__':
    main()