'''
Created on 2023/05/16

@author: Keroichi.T
'''
import traceback

def main():
    try:
        print( "before : main" )
        __a()
        print( "after : main" )
    
    except Exception:
        traceback.print_exc()
    
    finally:
        print( "main: finally")

def __a():
    try:
        print( "before : a" )
        b()
        print( "after : a" )
        
    except Exception:
        print( f"a: {traceback.format_exc()}" )
    
    finally:
        print( "a: finally" )
        
def b():
    try:
        print( "before : b" )
        c()
        print( "before : b" )
    
    except IndexError as e:
        print( f"b: {e}" )
        raise FileNotFoundError()
    
    finally:
        print( "b: finally" )
    

def c():
    try:
        print( "before : c" )
        d()
        print( "after : c" )
    
    except IndexError as e:
        print( f"c: {e}" )
        raise IndexError()
    
    finally:
        print( "c: finally" )

def d():
    try:
        print( "before : d" )
        aryInt = []
        aryInt[10] = 10
        print( "after : d" )
    
    except ZeroDivisionError as e:
        print( f"d: {e}" )
    
    except IndexError as e:
        print( f"d: {e}")
        raise IndexError()
        # ↓到達不能コードだがエラーにはならない
        print( "catch : d" )

    finally:
        print( "d: finally" )

if __name__ == '__main__':
    main()