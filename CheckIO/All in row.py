def checkio(arr):
    'convert all elements in arr in one row'

    output = []

    for ele in arr:
        if type(ele) == list:
            output += checkio(ele)
        else:
            output.append(ele)
    return output
    

if __name__ == '__main__':
    assert checkio([1,2,3]) == [1,2,3], 'First'
    assert checkio([1,[2,2,2],4]) == [1,2,2,2,4], 'Second'
    assert checkio([[[2]],[4,[5,6,[6],6,6,6],7]])\
                              == [2,4,5,6,6,6,6,6,7], 'Third'
    print('All ok')
