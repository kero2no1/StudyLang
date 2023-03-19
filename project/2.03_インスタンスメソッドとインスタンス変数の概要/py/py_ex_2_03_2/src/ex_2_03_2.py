'''
Created on 2023/03/19

@author: Keroichi.T
'''

def main():
    s:str = "1,2,3,4,5"
    
    # 素直に末尾から検索かけて、そこからスライス
    print(s[s.rfind(",")+1:])
    
    # splitメソッドで","を区切り文字で分割してリストにし、
    # 要素数にマイナスを指定して末尾にまわりこませて抽出
    print(s.split(",")[-1])

if __name__ == '__main__':
    main()