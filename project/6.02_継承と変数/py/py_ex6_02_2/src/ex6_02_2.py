'''
Created on 2023/05/07

@author: Keroichi.T
'''

class S:
    def __init__(self):
        self.x = 1.0
        
class T( S ):
    def __init__(self):
        self.x = "1.0"

def main():
    s = S()
    t = T()
    
    print( f"{s.x}, {type(s.x)}")
    print( f"{t.x}, {type(t.x)}")

if __name__ == '__main__':
    main()