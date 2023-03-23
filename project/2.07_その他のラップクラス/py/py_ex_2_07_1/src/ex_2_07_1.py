'''
Created on 2023/03/23

@author: Keroichi.T
'''

def main():
    ch1:str = "ABC"    
    ch2:str = "1"
    
    print( ch1.isdigit() )      # strのメソッド
    print( ch2.isdigit() )
    
    print( ch1.lower() )        # 全て小文字に
    print( ch1.capitalize() )   # 先頭文字だけ大文字に他は小文字

if __name__ == '__main__':
    main()