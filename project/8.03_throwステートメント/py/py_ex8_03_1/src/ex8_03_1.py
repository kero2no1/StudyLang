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
    
    except Exception as er:
        print( f"main: catch Exception({er.args[0]})" )
        # traceback.print_exc()
    
    finally:
        print( "main: finally")
        # traceback.print_exc()

def __a():
    try:
        print( "before : a" )
        b()
        print( "after : a" )
    
    except FileNotFoundError as er:
        print( f"a: catch FileNotFoundError({er.args[0]})" )
        raise IndexError( "raiseしたIndexError" ) from er

    except Exception as er:
        print( f"a: catch Exception({er.args[0]})" )
        # traceback.print_exc()
    
    finally:
        print( "a: finally" )
        # traceback.print_exc()
        
def b():
    try:
        print( "before : b" )
        c1()
        c2()    # c1メソッドから例外をraiseされているので実行されない
        print( "after : b" )
    
    except FileNotFoundError as er:
        print( f"b: catch FileNotFoundError({er.args[0]}) / raiseあり" )
        raise

    except ZeroDivisionError as er:
        print( f"b: catch ZeroDivisionError({er.args[0]})" )
        raise FileNotFoundError( "raiseしたError" ) from er
        # raise IndexError() from er
    
    except IndexError as er:
        print( f"b: catch IndexError({er.args[0]})" )
        raise FileNotFoundError( "raiseしたError" ) from er
    
    except Exception as er:
        print( f"b: catch Exception({er})" )
        traceback.print_exc()
        raise
    
    finally:
        print( "b: finally" )
    

def c1():
    try:
        print( "before : c1" )
        d()     # ここで発生した例外は呼出し元に通知なし(raise)
        e()     # ここで発生した例外は呼出し元に通知あり
        print( "after : c1" )
    
    except IndexError as er:
        print( f"c1: catch IndexError({er.args[0]})" )
        raise er
    
    # 親クラスを指定しても例外の捕捉ができる
    except ArithmeticError as er:
        print( f"c1: catch ArithmeticError({er.args[0]}) / raise FileNotFoundError")
        # 引数でメッセージを指定しないとargs[0]へのアクセスエラーになるので注意
        raise FileNotFoundError( "raiseしたError" ) from er
    
    else:
        print( "c1: Error is Nothing" )
    
    finally:
        print( "c1: finally" )

def c2():
    try:
        print( "before : c2" )
        d()
        e()
        print( "after : c2")
        
    except Exception as er:
        print( f"c2: catch({er.args[0]})" )

def d():
    try:
        print( "before : d" )
        aryInt = []
        aryInt[10] = 10
        print( "after : d" )
    
    except ZeroDivisionError as er:
        print( f"d: catch ZeroDivisionError({er.args[0]}) / raiseあり" )
        raise
    
    except IndexError as er:
        print( f"d: catch IndexError({er.args[0]}) / raiseなし")
        # raiseがなければ呼出し元に例外を通知しない

    # elseは省略可能

    finally:
        # finallyは必ず実行される,clean up と言われることも
        print( "d: finally" )

def e():
    try:
        print( "before : e" )
        ee = 5 / 0
        print( "after : e", ee )    # 例外発生のためここは処理されない
        
    except ZeroDivisionError as er:
        print( f"e: catch ZeroDivisionError({er.args[0]}) / raiseあり" )
        raise # 呼出し元に例外を通知する(このまま引き継ぐ)
        # raise IndexError from er   # 呼出し元に例外を通知する
        # ↓到達不能コードだがエラーにはならない
        print( "after : catch the Error at e method" )
    
    else:
        # 例外が発生しなかった場合の処理
        print( "e: Error is Nothing" )
        
    # finallyは省略可能
    

if __name__ == '__main__':
    main()