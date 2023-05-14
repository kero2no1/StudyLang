'''
Created on 2023/05/11

@author: Keroichi.T
'''

class Person( object ):
    # クラス変数
    name = "Nothing"
    age = 0

    # コンストラクタへの修飾子はない    
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
class Child( Person ):
    pass
    # def __init__(self, name, age):
    #     super().__init__(name, age)
    #     self.gender = "Man"
    

def main():
    print( Person.name )
    print( Person.age )
    
    p1 = Person( "John", 30 )
    print( p1.name )
    print( p1.age )
    
    print( Person.name )
    print( Person.age )

    p2 = Child( "Son", 10 )
    print( p2.name )
    print( p2.age )

if __name__ == '__main__':
    main()