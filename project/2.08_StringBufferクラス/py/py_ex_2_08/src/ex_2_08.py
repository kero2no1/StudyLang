'''
Created on 2023/03/23

@author: Keroichi.T
'''

def main():
    s:str = "mutable"  
    print( s )    
    print( id(s) )
    
    s = s + "です"        # 新しいインスタンスになっている
    print( s )
    print( id(s) )
    
    sl:str = []
    sl.append( "mutable" )
    print( sl )
    print( id(sl) )
    sl.append( "です" )   # 既存のインスタンス
    print( sl )
    print( id(sl) )
    
    # こういうやり方がセオリーらしい
    print( "".join(sl) )

if __name__ == '__main__':
    main()