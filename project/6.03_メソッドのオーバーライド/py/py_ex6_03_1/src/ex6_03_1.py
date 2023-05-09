'''
Created on 2023/05/09

@author: Keroichi.T
'''
from test.test_itertools import isEven

class Bond( object ):
    def display(self):
        print( "Bond" )
        
class ConvertibleBond( Bond ):
    def display(self):
        print( "ConvertibleBond" )

def main():
    bd = []
    
    for idx in range(6):
        if isEven(idx):
            bd.append( Bond() )
        else:
            bd.append( ConvertibleBond() )

        bd[idx].display()


if __name__ == '__main__':
    main()