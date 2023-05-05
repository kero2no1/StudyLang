'''
Created on 2023/05/05

@author: Keroichi.T
'''

class Trapezoid( object ):
    def __init__(self,b1, b2, h):
        self.b1 = b1
        self.b2 = b2
        self.h = h
        
    def getArea(self):
        return ( self.b1 + self.b2 ) * self.h * 0.5

def main():
    tp = [ 
           Trapezoid( 2, 3, 4 ),
           Trapezoid( 3, 2, 2 ),
           Trapezoid( 4.4, 5.5, 6.6 ),
         ]
    
    print( tp[0].getArea() )
    print( tp[1].getArea() )
    print( tp[2].getArea() )

if __name__ == '__main__':
    main()