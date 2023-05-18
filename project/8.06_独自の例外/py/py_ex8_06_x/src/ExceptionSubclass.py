'''
Created on 2023/05/17

@author: Keroichi.T
'''
import random

# 独自の例外クラスを作成できる
class MyErrorA( Exception ):
    def __init__(self,value):
        self.value = f"MyErrorA: {value}"
    
    def __str__(self):
        return repr(self.value)

class MyErrorB( Exception ):
    def __init__(self,value):
        self.value = f"MyErrorB: {value}"
    
    def __str__(self):
        return repr(self.value)

class MyErrorM( Exception ):
    def __init__(self,value):
        self.value = f"MyErrorM: {value}"
    
    def __str__(self):
        return repr(self.value)

class MyErrorN( Exception ):
    def __init__(self,value):
        self.value = f"MyErrorN: {value}"
    
    def __str__(self):
        return repr(self.value)
    


def main():
    a()
    
def a():
    try:
        try:
            raise MyErrorM( "@ inner try" )
    
        except MyErrorM as e:
            print( f"Inner catch({e})" )
        
        b()
        raise MyErrorM( "@ outer try" )

    except MyErrorM as e:
        print( f"Outer catch({e})" )
        
    except Exception as e:
        print( f"Outer catch({e})" )

def b():
    try:
        c()
        
    except MyErrorB as e:
        print( f"catch @ b method({e})" )
        raise

def c():
    i = random.randint(1,20)
    if i % 2 == 0:
        raise MyErrorA( f"number: {i}" )
    else:
        raise MyErrorB( f"number: {i}" )

if __name__ == '__main__':
    main()