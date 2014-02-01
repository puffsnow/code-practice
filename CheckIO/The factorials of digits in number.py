def fac(num):
    out = 1
    for n in range(1, num+1):
        out = out * n
    return out

def checkio(data):
    'calculate sum of the factorials for all digits of the specified positive integer number.'
    FAC = []
    total = 0
    for n in range(0, 10):
        FAC.append(fac(n))

    data_str = str(data)
    for c in data_str:
        total += FAC[int(c)]

    return total
	
    
if __name__ == '__main__':
    assert checkio(100) == 3, 'First'
    assert checkio(222) == 6, 'Second'
    assert checkio(1234) == 33, 'Third'
    print('All ok')
