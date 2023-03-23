'''
Created on 2023/03/23

@author: Keroichi.T
'''
from decimal import Decimal

def main():
    # インスタンス化にあたっては特別に意識することはない
    # pythonにnew演算子はなし

    
    d1 = Decimal( "0.1" )   # Decimalクラスのインスタンス生成
    d2 = Decimal( "0.1" )   # 別々のオブジェクト
    d3 = d1                 # d1とd3は同じオブジェクトを指している

    f:float = 0.1*3
    print( f )
    print( d1*3 )

    print( id(d1) )
    print( id(d2) )
    print( id(d3) )

    # ↓は値を変更しているように見えるが、
    # 異なるオブジェクトを代入している → イミュータブルと呼ぶ
    # 同じオブジェクトのまま変更ができないということ
    # 組込み型はだいたいイミュータブル
    i = 1
    print( id(i) )
    i = 2
    print( id(i) )
    
    # イミュータブルの反対はミュータブル
    # 同じオブジェクトに対して変更ができるということ
    li = []
    print( id(li) )
    li.append(1)
    print( id(li) )

if __name__ == '__main__':
    main()