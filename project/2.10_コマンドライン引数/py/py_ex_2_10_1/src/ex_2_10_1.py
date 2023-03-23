'''
Created on 2023/03/23

@author: Keroichi.T
'''

import sys

# コマンドライン入力「2.2 3.3 4.4,5.5」
def main():
    args = sys.argv
    print(len(args))
    print(args[0])      # ファイルパスが入っている
    print(args[1])
    print(args[2])
    print(args[3])      # カンマでは区切れない
    
    print( "コマンドライン入力の積：{}".
           format( float(args[1]) * float(args[2]) ) )

if __name__ == '__main__':
    main()