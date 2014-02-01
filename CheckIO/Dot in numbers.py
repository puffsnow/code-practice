def checkio(txt):
    '''
    string with dot separated numbers, which inserted after every third digit from right to left
    '''
    words = txt.split(' ')
    outStr = ''
    for word in words:
        if word.isdigit():
            wordDot = ''
            while len(word) > 3:
                part = word[-3:]
                word = word[:-3]
                wordDot = '.' + part + wordDot
            if len(word) > 0:
                wordDot = word + wordDot
            outStr = outStr + ' ' + wordDot
        else:
            outStr = outStr + ' ' + word
    return outStr.strip()
                 
                

if __name__ == '__main__':

    assert checkio('123456') == '123.456'
    assert checkio('333') == '333'
    assert checkio('9999999') == '9.999.999'
    assert checkio('123456 567890') == '123.456 567.890'
    assert checkio('price is 5799') == 'price is 5.799'
    assert checkio('he was born in 1966th') == 'he was born in 1966th'
    print('All ok')
