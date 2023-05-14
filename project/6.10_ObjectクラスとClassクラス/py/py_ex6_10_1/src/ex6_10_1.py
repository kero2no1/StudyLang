'''
Created on 2023/05/11

@author: Keroichi.T
'''

import inspect

class Person( object ):
    num = 0

    def __init__(self, name):
        # クラス変数へのアクセス
        Person.num += 1
        self.name = name
    
    # objectのメソッドstrをオーバーライド
    def __str__(self)->str:
        return f"num={Person.num}, name={self.name}"

def main():
    
    p1 = Person( "Keroichi" )
    print( p1 )
    
    p2 = Person( "Kerokero" )
    print( p2 )
    
    print( p1 )
    
    print( hasattr(Person, "__str__"))
    print( hasattr(Person, "__add__"))

    # オブジェクトが持つメソッドの一覧を取得する
    for m in inspect.getmembers(object()):
        print( m )

if __name__ == '__main__':
    main()