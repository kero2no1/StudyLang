'''
Created on 2023/05/05

@author: Keroichi.T
'''

class Rock( object ):
    def __init__(self, w):
        if w <= 10 :
            self.weight = w
        else:
            self.weight = 10

def main():
    rcs = []
    for num in range(10):
        rcs.append( Rock(num+1) ) 

    tmp = 0
    for rc in rcs:
        tmp += rc.weight
        print( rc.weight )
    
    print( tmp )


if __name__ == '__main__':
    main()