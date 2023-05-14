'''
Created on 2023/05/11

@author: Keroichi.T
'''

class L( object ):
    # pythonにはアクセス修飾子はない
    
    def __init__(self):
        self.x = 5      # インスタンス変数
        self._y = 10    # 慣習的に参照しない(開発者まかせ)
        self.__z = 50   # プライベートと同じ

    # ちなみにpythonにはデストラクタがある
    def __del__(self):
        # 同じクラスからのアクセスが可能
        print( "デストラクタ：", self.__z )

def main():
    ll = L()
    
    print( ll.x )
    print( ll._y )
    # print( ll.__z )    # 参照できない(エラーになる)

    # インスタンスの消滅
    del ll

if __name__ == '__main__':
    main()