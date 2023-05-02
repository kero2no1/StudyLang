'''
Created on 2023/05/02

@author: Keroichi.T
'''

class Sphere(object):
    cx = 1.0
    cy = 1.0
    cz = 1.0
    radius = 1.0
    
    def __init__( self, arg_cx, arg_cy, arg_cz, arg_radius ):
        # クラス変数を初期値にインスタンス変数化されている
        self.cx += arg_cx
        self.cy += arg_cy
        self.cz += arg_cz
        self.radius += arg_radius

        # クラス変数        
        Sphere.cx += arg_cx + 10
        Sphere.cy += arg_cy + 10
        Sphere.cz += arg_cz + 10
        Sphere.radius += arg_radius + 10

        # メソッド内変数
        cx = arg_cx + 100
        cy = arg_cy + 100
        cz = arg_cz + 100
        radius = arg_radius + 100

class Test(object):
    x = 1
    
    def __init__(self):
        self.x += 1
        
        Test.x += 1
        


def main():
    print("Testクラス変数：{}".format(Test.x))

    t1 = Test()
    print("t1インスタンス：{}".format(t1.x))
    print("Testクラス変数：{}".format(Test.x))

    t2 = Test()
    print("t2インスタンス：{}".format(t2.x))
    print("Testクラス変数：{}".format(Test.x))

    print("t1インスタンス：{}".format(t1.x))
    
    
    
    p1 = Sphere( 1.2, 2.3, 3.4, 4.5 )
    print( "{}, {}, {}, {}".format( p1.cx, p1.cy, p1.cz, p1.radius ) )
    print( "{}, {}, {}, {}".format( Sphere.cx, Sphere.cy, Sphere.cz, Sphere.radius ) )
    
    p2 = Sphere( 0, 0, 0, 0 )
    print( "{}, {}, {}, {}".format( p2.cx, p2.cy, p2.cz, p2.radius ) )
    print( "{}, {}, {}, {}".format( Sphere.cx, Sphere.cy, Sphere.cz, Sphere.radius ) )
    

if __name__ == '__main__':
    main()