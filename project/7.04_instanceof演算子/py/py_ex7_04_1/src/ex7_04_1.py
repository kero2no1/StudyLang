'''
Created on 2023/05/15

@author: Keroichi.T
'''

class I1( object ):
    pass

class I2( object ):
    pass

class I3( I1, I2 ):
    pass

class I4( object ):
    pass

class X( I3 ):
    pass

class W( X, I4 ):
    pass


def main():
    w = W()
    
    # 組込みメソッドisinstance
    # 第一引数のオブジェクトが、
    # 第二引数のインスタンスであるかどうかを確認する
    print( f"I1 : {isinstance( w, I1)}" )
    print( f"I2 : {isinstance( w, I2)}" )
    print( f"I3 : {isinstance( w, I3)}" )
    print( f"I4 : {isinstance( w, I4)}" )
    print( f"X  : {isinstance( w, X )}" )

if __name__ == '__main__':
    main()