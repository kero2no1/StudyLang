'''
Created on 2023/05/10

@author: Keroichi.T
'''

# 抽象クラスを作成するときはABCライブラリが必要
from abc import ABCMeta, abstractmethod

# 抽象クラス
class Shape(metaclass=ABCMeta):
    @abstractmethod
    def display(self):
        pass
    
    @abstractmethod
    #「->」は関数アノテーションという
    def getName(self) -> str:
        pass

class Circle( Shape ):
    def display(self):
        print( "Circle" )
        
    def getName(self)->str:
        return type(self)

class Rectangle( Shape ):
    def display(self):
        print( "Rectangle" )

    def getName(self)->str:
        # Eclipseは関数アノテーションを無視しても怒られない
        return int(10)


def main():
    # もちろん抽象クラスのインスタンス化はエラー
    # s = Shape()
    s = Circle()
    s.display()
    print(s.getName())
    
    s = Rectangle()
    s.display()
    print(type(s.getName()))

if __name__ == '__main__':
    main()