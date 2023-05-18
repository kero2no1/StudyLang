'''
Created on 2023/05/17

@author: Keroichi.T
'''

from builtins import *

def main():

    # str = "Abc"
    # str = object().__class__.__name__
    str = ZeroDivisionError().__class__.__name__
    print( str )
    print()

    try:
        # 文字列からインスタンスを生成する
        # ただし、モジュールで読み込みがされているものにかぎる
        obj = globals()[str]()
    
    except KeyError as e:
        print( e )
        print( "クラスが見つかりませんでした！" )
    
    else:
        count = len(obj.__class__.mro())-1
        for nm in obj.__class__.mro():
            print( nm )
        print( f"スーパークラスの数：{count}" )
        
    

if __name__ == '__main__':
    main()