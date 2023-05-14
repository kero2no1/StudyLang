'''
Created on 2023/05/06

@author: Keroichi.T
'''

class GrandParent( object ):
    def __init__(self):
        self.i = 10
        self.d = 1
        
class Parent( GrandParent ):
    def __init__(self):
        # super().__init__()
        self.f = 2.3
        self.d = "1.1"
        
class Child( Parent ):
    def __init__(self):
        super().__init__()
        self.f = "2.3"      # 同じ名前なので親の情報は見えなくなる
        self.s = "4567"



def main():
    c = Child()

    # インスタンス変数が生成されていなければ参照できない
    # サブクラスでコンストラクタの実行が必要
    # print(c.i)

    print( c.s )    # 継承元のインスタンス変数も参照可能(コンストラクタ要実行)
    print( c.d )
    # 同じインスタンス変数名がある場合は、子の情報で上書きする
    print( "{}, {}".format( c.f, type( c.f ) ) )
    
    p = Parent()
    # ↓は参照できているように見えているが、実際は違う。
    # iというインスタンス変数を新たに生成しているだけで、
    # 親クラスのインスタンス変数とはまったく別物
    p.i = 100
    print( p.i )
    

if __name__ == '__main__':
    main()