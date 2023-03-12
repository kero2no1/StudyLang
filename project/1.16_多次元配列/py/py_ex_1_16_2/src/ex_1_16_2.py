'''
Created on 2023/03/12

@author: Keroichi.T
'''

def main():
    dataArr = [ [1], [2,2], [3,3,3] ]
    
    print( "1次元の要素数：", len( dataArr[0] ) )
    print( "データ内容：{}".format( dataArr[0] ) )  

    print( "2次元の要素数：", len( dataArr[1] ) )
    print( "データ内容：{}".format( dataArr[1] ) )  
    
    print( "3次元の要素数：", len( dataArr[2] ) )
    print( "データ内容：{}".format( dataArr[2] ) )  

if __name__ == '__main__':
    main()