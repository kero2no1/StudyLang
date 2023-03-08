'''
Created on 2023/03/08

@author: Keroichi.T
'''

def main():

    # pythonでも型の明記はできる
    s : str = "\"Romeo, where art thou?\""    
    print( s )
    
    v : int = 65
    print( type(v) )
    v = "abc"           # 制約がつくわけではない
    print( type(v) )
    

if __name__ == '__main__':
    main()