'''
Created on 2023/03/28

@author: Keroichi.T
'''

def main():
    
    if check1() or  check2(): print("右側オペランドは評価されない")
    if check1() and check2(): print("両方が評価されている")
    
    # pythonのfor文は、任意のシーケンス型にわたって反復する
    arrays = [ i for i in range(-1,-11,-1) ]    # リスト内包表記
    for array in arrays: print(array)

    # こんなのもできる
    split = [ x for x in "Python" ]
    print(split)

    # 0～9までの数値を2乗と3乗を出力    
    for n in range(10): print("{}\t{}\t{}".format(n, n**2, n**3))

    # 1行に5コずつ出力する
    chk = 0
    for num in range(1,100):
        chk += 1
        chk %= 5
        if chk != 0 :
            # デフォルトで改行コードを出力するため、別途指定する
            print( str(num), end="\t" )
        else:
            print( str(num) )


def check1():    
    print("check1")
    return True

def check2():    
    print("check2")
    return True

if __name__ == '__main__':
    main()