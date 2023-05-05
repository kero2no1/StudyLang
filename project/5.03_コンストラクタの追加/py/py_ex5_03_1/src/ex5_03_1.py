'''
Created on 2023/04/30

@author: Keroichi.T
'''

class Person:
    name = ""
    age = 0
    income = 0.0

    def __init__(self, arg_name, arg_age, arg_income ):
        # ↓コンストラクタ内でのみ有効な変数となる
        # name = arg_name
        # age = arg_age
        # income = arg_income

        # ↓メソッド内からクラス変数を参照する場合
        Person.name = arg_name
        Person.age = arg_age
        Person.income = arg_income

def main():
    # 引数なしコンストラクタがないとエラー
    # p1 = Person()

    p1 = Person( "Keroichi", 40, 20_000_000 )    
    print( "{}は\n{}歳で\n{}円の収入です".format(p1.name, p1.age, p1.income ) )
    
    # コンストラクタ内でクラス変数指定して書き換えたので内容も更新されている
    print( "{}は\n{}歳で\n{}円の収入です".format(Person.name, Person.age, Person.income ) )

if __name__ == '__main__':
    main()