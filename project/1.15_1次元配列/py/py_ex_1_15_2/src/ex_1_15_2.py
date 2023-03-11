'''
Created on 2023/03/10

@author: Keroichi.T
'''

def main():
    # 各要素に型の一貫性は必要ない
    arrData = [ 1, "2", 3.0 ]

    print( arrData )
    print( len(arrData) )
    
    # 配列は初期化される
    arrData = []
    print( len(arrData) )
    
if __name__ == '__main__':
    main()