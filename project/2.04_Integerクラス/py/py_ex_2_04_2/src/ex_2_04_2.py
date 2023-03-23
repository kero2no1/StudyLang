'''
Created on 2023/03/23

@author: Keroichi.T
'''

def main():
    s:str = "125"
    i:int = int( s )

    i += 10
    s = str( i )    # 文字列への変換
    print( s )
    

if __name__ == '__main__':
    main()