'''
Created on 2023/03/19

@author: Keroichi.T
'''

def main():
    s:str = "\"Romeo, where art thou?\""    
    
    # 文字列長から求める方法
    # 文字列要素をスライス([start:last]と指定)できる
    # startを省略すると0、lastを省略するとlen()とみなす
    print(s[len(s)-10:])

    
    # pythonの場合、startをマイナスにすることで末尾にまわりこむ
    # ただし要素数以上の数を指定しても先頭にはまわりこまない
    print(s[-10:])


if __name__ == '__main__':
    main()