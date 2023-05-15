'''
Created on 2023/05/15

@author: Keroichi.T
'''
from abc import ABCMeta, abstractmethod

'''
python にインターフェースの機能はない
そもそも、、、
抽象クラスは、
他のクラスの処理の骨組みを定義するときに利用する。
抽象メソッドを１つ以上もつクラスを指す。
このクラスを直接インスタンス化できない。

インターフェースは、
クラスで共通する使用を定義するときに利用する。
変数とメソッドの型のみを定義。
必要に応じて複数のインターフェースを継承(多重継承)して実装する。

pythonでインターフェースを実現するなら、
抽象クラスを抽象メソッドだけにすればよい。
'''

class PowerSteering( metaclass=ABCMeta ):
    ss = "PS"
    
    @abstractmethod
    def Power_Steering(self):
        raise NotImplementedError()

class Auto( metaclass=ABCMeta ):
    @abstractmethod
    def display(self):
        pass

class Model1( Auto, PowerSteering ):
    def display(self):
        print( Model1.ss )

    
    def Power_Steering(self):
        self.display()

def main():
    m = Model1()
    print( "Model1クラス" )
    m.Power_Steering()

if __name__ == '__main__':
    main()