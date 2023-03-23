'''
Created on 2023/03/23

@author: Keroichi.T
'''

def main():
    # 基本データ型のラッパークラスはなさそうかな
    s = "31"            # 文字列オブジェクト
    v = int(s)          # 組込み関数を使って整数変換
    
    print( type(s) )
    print( type(v) )
    
    # 基数変換(n進→10進)も組込み関数で可能int(x,base=10)
    print( int(s, 16) ) # 0x31 を10進数に変換
    
    # 10進→n進も組込み関数
    print( hex(int(s)) )    

if __name__ == '__main__':
    main()