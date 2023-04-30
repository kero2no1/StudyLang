'''
Created on 2023/04/30

@author: Keroichi.T
'''

class Sphere:
    
    def __init__(self, arg_radius, arg_cp ):
        self.radius = arg_radius
        self.cp = arg_cp
 
def main():
    
    cube = Sphere( 5.5, [1.2, 3.4] )
    
    print( "半径：{}".format( cube.radius ) )
    print( "中心座標：{},{}".format( cube.cp[0], cube.cp[1] ) )
    
if __name__ == '__main__':
    main()