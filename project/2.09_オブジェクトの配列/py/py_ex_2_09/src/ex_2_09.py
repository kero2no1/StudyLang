'''
Created on 2023/03/23

@author: Keroichi.T
'''

def main():
    array = [object] * 5
    # array = [] * 5    空リストを繰返しても要素は空っぽのまま
    print( type(array) )
    
    array[0] = "String 0"
    array[1] = "String 1"
    array[2] = "String 2"
    array[3] = None         # nullのこと
    array[4] = "String 4"
    
    
    print( len(array) )
    print( "{}, {}".format(array[0], type(array[0])) )
    print( "{}, {}".format(array[1], type(array[1])) )
    print( "{}, {}".format(array[2], type(array[2])) )
    print( "{}, {}".format(array[3], type(array[3])) )
    print( "{}, {}".format(array[4], type(array[4])) )

if __name__ == '__main__':
    main()