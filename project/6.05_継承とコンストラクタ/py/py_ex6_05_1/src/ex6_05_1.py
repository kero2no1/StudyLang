'''
Created on 2023/05/10

@author: Keroichi.T
'''

class S2( object ):
    def __init__( self, s2 ):
        self.s2 = s2
        print( "S2 Constructor" )
        
class T2( S2 ):
    def __init__( self, s2, t2 ):
        # 親コンストラクタの呼出し前でも処理を記述できる
        print( "Before T2 Constructor" )
        super().__init__( s2 )
        self.t2 = t2
        print( "T2 Constructor" )
        
class R2( S2 ):
    def __init__( self, s2, r2 ):
        # ここだけ見ると、親クラスのコンストラクタと引数が違うため
        # エラーになるはず
        # 実際は多重継承の動作の関係でエラーにならない
        super().__init__( s2, 10 )
        self.r2 = r2
        print( "R2 Constructor" )

class U2( T2 ):
    def __init__( self, s2, t2, u2 ):
        super().__init__(s2, t2)
        self.u2 = u2
        print( "U2 Constructor" )

class W2( R2, T2 ):     # 多重継承が可能
    def __init__( self, r2, t2, w2 ):
        super().__init__(t2, r2)
        self.w2 = w2
        print( "W2 Constructor" )

class B1( object ):
    def __init__(self, a):
        print( "B1 init")
        self.a = a

class B2( object ):
    def __init__(self, b):
        print( "B2 init" )
        self.b = b

class D1( B1, B2 ):
    def __init__(self, a, b, c):
        print( "D init" )
        B1.__init__(self, a)
        B2.__init__(self, b)
        self.c = c

class GrandParent( object ):
    def __init__(self):
        print( "GrandParent Initialize" )
        
    def greet(self):
        print( "Hello GrandParent" )

class Mother( GrandParent ):
    def __init__(self):
        print( "Mother Initialize" )
        super().__init__()
        
    def greet(self):
        print( "Hello Mother" )
        super().greet()

class Father( GrandParent ):
    def __init__(self):
        print( "Father Initialize" )
        super().__init__()
        
    def greet(self):
        print( "Hello Father" )
        super().greet()

class Child( Mother, Father ):
    def __init__(self):
        print( "Child Initialize" )
        super().__init__()
    
    def greet(self):
        print( "Hello Child" )
        super().greet()

def main():
    u2 = U2( 1, 2, 3 )
    print( f"u2.s2 = {u2.s2}" )
    print( f"u2.t2 = {u2.t2}" )
    print( f"u2.u2 = {u2.u2}" )
    
    print( "\n多重継承" )
    # 多重継承はコンストラクタの呼出し順が特殊
    # ↓メソッドの解決順序を取得できる
    print(Child.mro())
    # Child→Mother→Father→GrandParentの順で呼び出されている
    # MotherからFatherのコンストラクタを呼んでいるような動作
    c = Child()
    c.greet()

    # 単一継承の動作例
    print(Mother.mro())
    # Motherのコンストラクタを実行→親クラスのコンストラクタ呼出し
    m = Mother()
    m.greet()

    print(D1.mro())
    d1 =D1(0,1,2)
    print( f"a: {d1.a}, b: {d1.b}, c: {d1.c}" )

    print(W2.mro())
    w2 = W2(1,2,3)
    # W2のコンストラクタからR2のコンストラクタを呼出し、
    # R2のコンストラクタからT2のコンストラクタを呼出している
    # そのため、R2クラスからのsuper().__init__が引数２つでもエラーにならない

if __name__ == '__main__':
    main()