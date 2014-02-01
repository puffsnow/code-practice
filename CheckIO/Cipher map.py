def tran(data):

    transMap = ['', '', '', '']

    for i in range(4):
        for j in range(4):
            transMap[i] += data[3-j][i]
    
    return transMap


def checkio(input_data):
    'Return password of given cipher map'
    
    dataMap = list(input_data[0])
    charMap = list(input_data[1])

    password = ''

    for i in range(4):
        for j in range(4):
            for k in range(4):
                if dataMap[j][k] == 'X':
                    password += charMap[j][k]
        dataMap = tran(dataMap)


    return password

        
        

if __name__ == '__main__':
    assert checkio([[
    'X...',
    '..X.',
    'X..X',
    '....'],[
    'itdf',
    'gdce',
    'aton',
    'qrdi']]) == 'icantforgetiddqd', 'First'

    assert checkio( [[
    '....',
    'X..X',
    '.X..',
    '...X'],[
    'xhwc',
    'rsqx',
    'xqzz',
    'fyzr']]) == 'rxqrwsfzxqxzhczy', 'Second'
    print('All ok')
