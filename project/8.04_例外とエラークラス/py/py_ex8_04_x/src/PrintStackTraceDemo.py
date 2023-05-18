'''
Created on 2023/05/17

@author: Keroichi.T
'''
import traceback

def main():
    try:
        a()
    except IndexError:
        print( "main でtraceback出力" )
        # スタックされた情報を出力する
        traceback.print_exc()

def a():
    # try-exceptがなければ、そのまま外部に例外を送出する
    b()
    
def b():
    try:
        c()
        idx = []
        idx[1] = 10
    except IndexError:
        print( "b でError発生" )
        raise
    
def c():        
    try:
        d()
    except ZeroDivisionError:
        print( "c でtraceback出力" )
        traceback.print_exc()
    
def d():
    try:
        print( 1 / 0 )
    except ZeroDivisionError:
        print( "d でError発生" )
        raise


if __name__ == '__main__':
    main()