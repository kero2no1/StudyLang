'''
Created on 2023/05/11

@author: Keroichi.T
'''



def main():
    iobj = 10
    # オブジェクトのクラスを取得する
    print( iobj.__class__ )
    # クラスが定義されているモジュール名を取得する
    print( iobj.__class__.__module__)
    # オブジェクトの親クラスを取得する
    print( iobj.__class__.__base__)
    print( iobj.__class__.__base__.__name__)


if __name__ == '__main__':
    main()