'''
Created on 2023/05/14

@author: Keroichi.T
'''
from abc import abstractmethod, ABCMeta

class Widget( metaclass = ABCMeta ):
    weight = 10
    color = ""
    
    @abstractmethod
    def __init__(self):
        pass
    
class WidgetA( Widget ):    
    def __init__(self):
        self.weight = 4
        self.color ="Red"
        
class WidgetB( Widget ): 
    color = "Blue"

    def __init__(self):
        self.weight = 1
        self.color ="Pink"
        
class WidgetC( Widget ):    
    def __init__(self):
        self.weight = 5
        self.color ="Yellow"
        
class WidgetD( Widget ):    
    def __init__(self):
        self.weight = 17
        self.color ="Green"
        
def main():
    ws = [ WidgetA(),
           WidgetB(),
           WidgetC(),
           WidgetD(),
           WidgetA(),
           WidgetB() ]

    smy = 0
    for w in ws:
        print( w.color )
        smy += w.weight
    
    print( smy )
    print( sum( [ w.weight for w in ws ] ) )
    

if __name__ == '__main__':
    main()