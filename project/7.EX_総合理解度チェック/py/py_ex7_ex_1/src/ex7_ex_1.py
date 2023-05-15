'''
Created on 2023/05/15

@author: Keroichi.T
'''
from abc import ABCMeta, abstractmethod

class Robot( metaclass=ABCMeta ):
    def display(self):
        print( self )

    def __str__(self):
        return f"MyClass is {self.__class__.__name__}:"

class Locomotion( metaclass=ABCMeta ):
    @abstractmethod
    def forward(self): pass

    @abstractmethod
    def reverse(self): pass

    @abstractmethod
    def stop(self): pass

class Sound( metaclass= ABCMeta ):
    @abstractmethod
    def beep(self): pass

class RobotA( Robot ):
    pass

class RobotB( Robot, Locomotion ):
    def forward(self):
        pass
    
    def reverse(self):
        pass
    
    def stop(self):
        print( "RobotB-stop" )

class RobotC( Robot, Locomotion, Sound ):
    def forward(self):
        pass
    
    def reverse(self):
        pass
    
    def stop(self):
        print( "RobotC-stop" )
        
    def beep(self):
        print( "RobotC-beep")

class RobotA1( RobotA, Sound ):
    def beep(self):
        print( "RobotA1-beep" )

class RobotB1( RobotB, Sound ):
    def beep(self):
        print( "RobotB1-beep" )

class RobotB2( RobotB ):
    pass

class RobotC1( RobotC ):
    pass
    
def main():
    objs = [
             RobotA(),
             RobotB(),
             RobotC(),
             RobotA1(),
             RobotB1(),
             RobotB2(),
             RobotC1(),
            ]
    
    for robo in objs:
        robo.display()
        if isinstance( robo, Sound ): robo.beep()
        if isinstance( robo, Locomotion ): robo.stop()

if __name__ == '__main__':
    main()