'''
Ackermann's fuction in python

NOTE: after calculating ackermann of 4, 1
it crashes because python says: RecursionError: maximum recursion depth exceeded in comparison
'''

# this does all the calculations
def ack(m, n):
    
    m = m
    n = n
    ans = 0
    
    # the interesting bit
    if (m == 0):
        ans = n + 1
    elif (n == 0):
        ans = ack(m - 1, 1)
    else:
        ans = ack(m - 1, ack(m, n - 1))
    return ans

# increments i and j and passes them as args to ack()
def main():
    for i in range(6):
        for j in range(6):
            print("ackermann of (%d, %d) = %d" % (i, j, ack(i, j)))
            
if __name__ == '__main__':
    main()
    
