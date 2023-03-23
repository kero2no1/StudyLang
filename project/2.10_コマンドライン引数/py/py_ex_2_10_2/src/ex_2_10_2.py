'''
Created on 2023/03/23

@author: Keroichi.T
'''
import sys
import math

# コマンドライン入力「5.5」
def main():
    # コマンドラインで円の半径を受け取る
    r:float = float( sys.argv[1] )
    # 面積 = π * r^2
    print( math.pi * math.pow( r, 2 ) )
    print("")

    # 【参考】コンソール入力方法
    # inputメソッドを使う
    print( type(input(">> ")) )
    
    lin = input(">> ").split(",")
    print( lin )

    # 複数行入力(readlines)
    # 入力の終了はCtrl+Z
    lin = sys.stdin.readlines()
    print( lin )

if __name__ == '__main__':
    main()