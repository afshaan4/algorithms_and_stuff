#decorators in python

from time import sleep

def wrapper(func):
    def delay():
        print("waiting")
        sleep(5)
    
        func()
    return delay

@wrapper
def cat():
    print("meow")
    
if __name__ == '__main__':
    cat()
    
