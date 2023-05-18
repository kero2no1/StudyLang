'''
Created on 2023/05/11

@author: Keroichi.T
'''

from abc import abstractmethod, ABCMeta

class Singleton( object ):
    _unique_instance = None
    
    # コンストラクタをprivateにすることはできないので、
    # コンストラクタを使おうとしたらエラーになるようにする
    def __new__(cls):
        # newメソッドの戻り値は新しいオブジェクトのインスタンスでなければならない
        # clsのインスタンスを返さない場合はinitメソッドは呼ばれない
        raise NotImplementedError( "コンストラクタを使ってインスタンス生成できません" )
    
    @classmethod
    def __super_new__(cls):
        # 親クラスのnewメソッドをコールする
        return super().__new__(cls)
    
    # 外部でインスタンスを得るために使うクラスメソッド
    @classmethod
    def getInstance(cls):
        if not cls._unique_instance:
            cls._unique_instance = cls.__super_new__()
        return cls._unique_instance
    

class Vehicle( metaclass=ABCMeta ):
    test = "First Comment"
    
    @abstractmethod
    def numWheels(self)->int:
        pass
    
    # クラスメソッドは継承先の影響を受ける
    @classmethod
    def classmethod(cls):
        print( cls.test )
    
    # スタティックメソッドは継承元の動きをする
    @staticmethod
    def staticmethod():
        print( Vehicle.test )
    
class Car( Vehicle ):
    test = "Second Comment"
    
    def numWheels(self)->int:
        return 4

class Truck( Vehicle ):
    def numWheels(self)->int:
        return 8

def main():
    c1 = Car()
    t1 = Truck()
    
    print( c1.numWheels() )
    print( t1.numWheels() )
    c1.classmethod()
    c1.staticmethod()
    
    # ins1 = Singleton()
    ins1 = Singleton.getInstance()
    print( "ins1:", ins1 )
    ins2 = Singleton.getInstance()
    print( "ins2:", ins2 )
    
    print( ins1 == ins2 )
    

if __name__ == '__main__':
    main()