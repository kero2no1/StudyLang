'''
Created on 2023/05/04

@author: Keroichi.T
'''
class ChangeLanguage( object ):
    
    @staticmethod
    def getSpanish( word ):
        words = {
                 "One"  :"Uno",
                 "Two"  :"Dos",
                 "Three":"Tres",
                 "Four" :"Quatro",
                 "Five" :"Cinco",
                 }
        
        if word in words:
            return words[word]
        else:
            return "異常"

    @classmethod
    def getSpanishClsMth(cls, word):
        # clsはクラスメソッドを参照する時に使用されたクラスになる
        print(cls)

        if word == "One" : 
            return "Uno"
        elif word == "Two":
            return "Dos"
        elif word == "Three":
            return "Tres"
        elif word == "Four":
            return "Quatro"
        elif word == "Five":
            return "Cinco"
        else:
            return "異常"

class ClsMethodTest( ChangeLanguage ):
    pass

def main():
    # 静的メソッドを使用する
    print( ChangeLanguage.getSpanish( "Four" ) )

    # クラスメソッドを使用する
    print( ChangeLanguage.getSpanishClsMth( "Five" ) )
    
    print( ClsMethodTest.getSpanishClsMth( "Three" ) )

if __name__ == '__main__':
    main()