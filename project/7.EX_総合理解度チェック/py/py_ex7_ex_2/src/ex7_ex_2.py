'''
Created on 2023/05/15

@author: Keroichi.T
'''

from tents.tentA import TentA
from tents.tentB import TentB
from tents.tentC import TentC
from tents.tentD import TentD
from tents.tent import Waterproof

def main():
    ts = [ TentA(), TentB(), TentC(), TentD() ]
    
    for t in ts:
        if isinstance( t, Waterproof ): print( t.__class__ )

if __name__ == '__main__':
    main()