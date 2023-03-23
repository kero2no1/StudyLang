'''
Created on 2023/03/23

@author: Keroichi.T
'''

def main():
    # 16進数を10進数に
    va_16:int = int( "22", 16 )
    print( va_16 )

    # 16進数を8進数に
    va_8:int = int( "33", 8 )
    print( va_8 )

    # 16進数を10進数に
    va_10:int = int( "44", 10 )
    print( va_10 )

    # 合計値
    print( va_16 + va_8 + va_10 )

if __name__ == '__main__':
    main()