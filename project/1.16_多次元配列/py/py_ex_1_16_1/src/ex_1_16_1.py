'''
Created on 2023/03/12

@author: Keroichi.T
'''

def main():
    # 多次元配列は、「配列の配列」
    dataArr = [
        [ -56.7,],
        [ 500.1, 70.70],
        [ 100.9, 0.5, 20.20],
    ]
    
    # 指定した要素(オブジェクト)ごと抽出できる
    print( dataArr[0])
    print( dataArr[0][0])
    print( dataArr[1] )
    print( dataArr[1][0])
    print( dataArr[1][1])
    print( dataArr[2] )
    print( dataArr[2][0])
    print( dataArr[2][1])
    print( dataArr[2][2])
    
    dataArr = list( ["Python", "Java"] )
    print( dataArr )
    print( dataArr[0] )
    print( dataArr[0][2] )

if __name__ == '__main__':
    main()