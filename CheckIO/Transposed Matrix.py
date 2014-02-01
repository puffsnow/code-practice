def checkio(matr):
    'return a transposed matrix'

    tMatr = []

    for n in range(len(matr[0])):
        tMatr.append([])
    
    for row in matr:
        for i in range(len(matr[0])):
            tMatr[i] = tMatr[i] + [row[i]]

    return tMatr
    
if __name__ == '__main__':
    assert checkio([[1,2],
             [1,2]]) ==  [[1, 1],
                          [2, 2]], 'First'
    assert checkio([[1,0,3,4,0],
                    [2,0,4,5,6],
                    [3,4,9,0,6]]) == [[1, 2, 3],
                                      [0, 0, 4],
                                      [3, 4, 9],
                                      [4, 5, 0],
                                      [0, 6, 6]],'Second'
    print('All ok')
