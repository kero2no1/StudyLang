'''
Created on 2023/03/12

@author: Keroichi.T
'''

def main():
    dataArr = [
        [ [ 11,12,13 ],[ 14,15,16 ],[ 17,18,19 ] ],
        [ [ 21,22,23 ],[ 24,25,26 ],[ 27,28,29 ] ],
        [ [ 31,32,33 ],[ 34,35,36 ],[ 37,38,39 ] ],
    ]
    
    print( dataArr[0][0][0] )
    print( dataArr[0][0][1] )
    print( dataArr[0][0][2] )
    print( dataArr[0][1][0] )
    print( dataArr[0][1][1] )
    print( dataArr[0][1][2] )
    print( dataArr[0][2][0] )
    print( dataArr[0][2][1] )
    print( dataArr[0][2][2] )
    
    print( dataArr[1][0][0] )
    print( dataArr[1][0][1] )
    print( dataArr[1][0][2] )
    print( dataArr[1][1][0] )
    print( dataArr[1][1][1] )
    print( dataArr[1][1][2] )
    print( dataArr[1][2][0] )
    print( dataArr[1][2][1] )
    print( dataArr[1][2][2] )

    print( dataArr[2][0][0] )
    print( dataArr[2][0][1] )
    print( dataArr[2][0][2] )
    print( dataArr[2][1][0] )
    print( dataArr[2][1][1] )
    print( dataArr[2][1][2] )
    print( dataArr[2][2][0] )
    print( dataArr[2][2][1] )
    print( dataArr[2][2][2] )

    print("")
    
    # 多次元配列のlen関数の結果について
    lenTest = [
        [ [1], ],
        [ [4,4,4,4],[5,5,5,5,5], ],
        [ [2,2],[3,3,3],[7,7,7,7,7,7,7],[9,9,9,9,9,9,9,9,9] ],
        []
    ]
    
    # 動きはJavaと同じ
    print( len( lenTest ) )         # 一番外側の要素数 
    print( len( lenTest[0] ) )      # 1
    print( len( lenTest[1] ) )      # 2
    print( len( lenTest[2] ) )      # 4
    print( len( lenTest[2][3] ) )   # 9




if __name__ == '__main__':
    main()