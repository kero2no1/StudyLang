'''
Created on 2023/04/29

@author: Keroichi.T
'''

class Sphere:
    radius = 0.0
    cp = []


def main():
    cube = Sphere()
    cube.radius = 5.5
    cube.cp = [ 1.2, 3.4 ]    
    
    print( "半径：{}".format( cube.radius ) )
    print( "中心座標：{},{}".format( cube.cp[0], cube.cp[1] ) )

if __name__ == '__main__':
    main()