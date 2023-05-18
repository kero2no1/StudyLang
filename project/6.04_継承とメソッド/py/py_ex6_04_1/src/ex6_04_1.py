'''
Created on 2023/05/09

@author: Keroichi.T
'''

class I2( object ):
    def getDescription(self):
        ss = [object]*2
        ss[0] = ( "このクラスは………" + "I2" )
        ss[1] = ( "スーパークラスは…" + "なし" )
        
        return ss

class J2( I2 ):
    def getDescription(self):
        ss = []
        ss.append( "このクラスは………" + "J2" )
        ss.append( "スーパークラスは…" + "I2" )

        return ss

class K2( J2 ):
    def getDescription(self):
        ss = []
        ss.append( "このクラスは………" + "K2" )
        ss.append( "スーパークラスは…" + "J2" )

        return ss


def main():
    # 関数内関数
    def display( msgs ):
        for msg in msgs:
            print( msg )

    display( I2().getDescription() )
    display( J2().getDescription() )
    display( K2().getDescription() )


if __name__ == '__main__':
    main()