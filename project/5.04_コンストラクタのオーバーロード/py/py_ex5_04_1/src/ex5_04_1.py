'''
Created on 2023/05/01

@author: Keroichi.T
'''

# pythonにオーバーロードはない
class Circle:
    # デフォルト値のない引数を、ある引数よりも後に記述できない
    # def __init__(self, arg_cx = 0.0, arg_cy = 0.0, arg_radius):

    def __init__(self, arg_cx = 0.0, arg_cy = 0.0, arg_radius = None):
        self.cx = arg_cx
        self.cy = arg_cy
        self.radius = arg_radius

    # def __init__(self, arg_cx):
    #     self.cx = arg_cx


def main():
    # 引数を指定して設定することができる
    c1 = Circle( arg_radius = 5.5 )
    print( "{}, {}, {}".format(c1.cx, c1.cy, c1.radius ) )

    c2 = Circle( 1.2, 3.4, 5.5 )
    print( "{}, {}, {}".format(c2.cx, c2.cy, c2.radius ) )
    
    c3 = Circle( 1.2, 3.4 )
    print( "{}, {}, {}".format(c3.cx, c3.cy, c3.radius ) )
    

if __name__ == '__main__':
    main()