'''
Created on 2023/05/06

@author: Keroichi.T
'''

class GrandParent( object ):
    def __init__(self):
        self.i = 0
        self.d = 0
        
class Parent( GrandParent ):
    def __init__(self):
        super()
        self.f = 0.0
        self.d = "0.0"
        
class Child( Parent ):
    def __init__(self):
        super()
        self.s = "0"



def main():
    c = Child()
    
    print(type(c.d))
    

if __name__ == '__main__':
    main()