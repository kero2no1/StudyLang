'''
Created on 2023/03/29

@author: Keroichi.T
'''

import sys

# 実行時の引数 "5 nickels 4 quarters 2 dimes"
def main():
    d, s = 0, 0.
    for arg in sys.argv[1:]:
        match arg[0]:
            case "n":
                s += (d * 5)
                print("5￠コインは {} 枚".format(d))
            case "q":
                s += (d * 25)
                print("25￠コインは {} 枚".format(d))
            case "d":
                s += (d * 10)
                print("10￠コインは {} 枚".format(d))
            case _:         # ワイルドカード→数値(硬貨の枚数)
                d = int(arg)
    
    print("コインの総額は＄{}".format(s/100), end="\n\n")
    
    # コンソール入力情報を判別する
    # ↓ディクショナリ型(組込み型)
    dic = {"One":"Uno",         
           "Two":"Dos",
           "Three":"Tres",
           "Four":"Quatro",
           "Five":"Cinco"}
    cin = input("One/Two/Three/Four/Fiveのいずれかを入力：\n >> ")

    msg = [""," はスペイン語で ",""]
    msg[0], msg[2] = cin, dic[cin]
    print("".join(msg))

if __name__ == '__main__':
    main()