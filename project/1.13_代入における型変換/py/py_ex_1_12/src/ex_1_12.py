'''
Created on 2023/03/09

@author: Keroichi.T
'''

import sys

def main():
    # pythonは整数の精度制限なし
    # 整数リテラル間のアンダースコアは無視される
    s1 = 0xFFFF_FFFF_FFFF_FFFF_FFFF_FFFF
    s1 = s1
    print(s1)
    print("",type(s1))
    
    # 浮動小数点はC言語のdoubleで実装されていることが多いらしい
    # プログラムが動作する環境での精度に依存する模様   
    print(sys.float_info)
    
    # pythonは動的型付け言語、よきにはからってくれる
    # が、裏で処理してくれているわけなのでその分処理負荷がかかる
    # 大量計算時は、計算前に予め型を合わせておくのがよいと思う
    s1 /= 2
    print(s1)
    print(type(s1))
    
    s1, s2 = 1, 0.5
    print("s1={}, s2={}".format(s1,s2))
    print("s1:{}, s2:{}".format(type(s1),type(s2)))
    print("s1 + s2 = {}, s1+s2:{}".format(s1+s2,type(s1+s2)))
    
    s1,s2 = "1", 0.5
    print("s1={}, s2={}".format(s1,s2))
    print("s1:{}, s2:{}".format(type(s1),type(s2)))

    # これは許してもらえない
    s3 = s1 + s2
    print("s1 + s2 = {}, s1+s2:{}".format(s3,type(s3)))
    

if __name__ == '__main__':
    main()