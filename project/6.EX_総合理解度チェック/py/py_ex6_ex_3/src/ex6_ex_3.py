'''
Created on 2023/05/13

@author: Keroichi.T
'''
from abc import ABC, abstractmethod


class Monster( ABC ):
    @abstractmethod
    def display(self):
        pass

class Vampire( Monster ):
    def display(self):
        print( self.__class__.__name__ )
    
class Werewolf( Monster ):
    def display(self):
        print( "Werewolf" )
    
class Zombie( Monster ):
    def display(self):
        print( "Zombie" )
    
def main():

    # 繰返し変数が必要ないときは、「_」や「dummy」が使われる
    # これらを使うと、未使用変数の警告も出ないようになる
    mon = []
    for _ in range( 2 ):
        mon.append( Vampire() )
        mon.append( Werewolf() )
        mon.append( Zombie() )

    for m in mon:
        m.display()

if __name__ == '__main__':
    main()