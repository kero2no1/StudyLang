'''
Created on 2023/04/29

@author: Keroichi.T
'''

class Person:
    # これはクラス変数になる
    name = ""
    age = 0
    income = 0.0

def main():
    # クラス変数の表示
    print( Person.name )
    print( Person.age )
    print( Person.income )
    
    p1 = Person()
    p1.name = "keroichi"
    p1.age = 40
    p1.income = 20_000_000
    
    print( p1.name + "は" )
    print( str(p1.age) + "歳で" )
    print( str(p1.income) + "円の収入です" )

    # もう一度クラス変数の表示
    # インスタンスで書き換えてもクラス変数は変わらない
    print( Person.name )
    print( Person.age )
    print( Person.income )
    
if __name__ == '__main__':
    main()