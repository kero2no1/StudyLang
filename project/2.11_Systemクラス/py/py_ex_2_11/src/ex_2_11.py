'''
Created on 2023/03/23

@author: Keroichi.T
'''
import sys
import time

def main():
    
    # pythonの時間計測はtimeモジュール
    old_time = time.perf_counter()
    time.sleep(1)       # 1秒一時停止       
    now_time = time.perf_counter()
    
    print( now_time - old_time )
    print( now_time )

    # CPUの使用時間を計測したい時
    old_time = time.process_time()
    time.sleep(1)       # 1秒一時停止       
    now_time = time.process_time()
    
    print( now_time - old_time )
    print( now_time )
    
    
    sys.exit(0)         # 終了コードを指定、0は正常終了
    
if __name__ == '__main__':
    main()