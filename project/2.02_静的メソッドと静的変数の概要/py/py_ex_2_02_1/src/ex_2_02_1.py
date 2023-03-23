'''
Created on 2023/03/18

@author: Keroichi.T
'''

# mathモジュールは、静的メソッド(組込み関数)を持ってないみたい
# ちなみに、printは組込み関数なのでなにもせずに使えている。

# 標準モジュールをimportして使う

# mathモジュール全体を取り込む場合
import math

# 特定の関数やクラスを取り込む場合
# この場合、モジュール名を省略することができる
from math import sqrt


def main():
    print(sqrt(23.45))
    
    print(math.pi)
    
    

if __name__ == '__main__':
    main()