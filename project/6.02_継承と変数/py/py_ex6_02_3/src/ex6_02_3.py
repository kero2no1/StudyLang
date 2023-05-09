'''
Created on 2023/05/07

@author: Keroichi.T
'''

class G( object ):
    x = 100
    
    def __init__(self):
        self.y = 200
    
class H( G ):
    x = 10
    
    def __init__(self):
        super().__init__()
        self.y = 20
    
    def display(self):
        print( f"Hクラスのx:{H.x}" )
        print( f"Gクラスのx:{super().x}" )
        print( f"Gクラスのx:{G.x}" )

def main():
    h = H()
    
    h.display()

if __name__ == '__main__':
    main()