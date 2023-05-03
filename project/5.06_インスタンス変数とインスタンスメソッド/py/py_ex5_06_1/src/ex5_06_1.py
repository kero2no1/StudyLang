'''
Created on 2023/05/03

@author: Keroichi.T
'''

class Sphere( object ):
    def __init__(self, cx = 0.0, cy = 0.0, cz = 0.0, r = 1.0):
        self.cx = cx
        self.cy = cy
        self.cz = cz
        self.r = r
    
    def move(self, cx, cy, cz):
        self.cx += cx
        self.cy += cy
        self.cz += cz
        
    def scale(self, radius):
        self.r = radius

def main():
    c1 = Sphere(1.2, 2.3, 3.4)
    print( f"{c1.cx}, {c1.cy}, {c1.cz}, {c1.r}" )
    
    c1.scale(5.5)
    print( f"{c1.cx}, {c1.cy}, {c1.cz}, {c1.r}" )

    c1.move(10,10,10)
    print( f"{c1.cx}, {c1.cy}, {c1.cz}, {c1.r}" )
    
    c2 = Sphere()
    print( f"{c2.cx}, {c2.cy}, {c2.cz}, {c2.r}" )    
    
if __name__ == '__main__':
    main()