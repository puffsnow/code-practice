def checkio(line):
    '''
    Output a single number representing the cost of the given slogan, according to Petr's pricing.
    '''
    count = 0
    
    for c in line:
        if c.isalpha():
            count += ((ord(c) - 97) % 3) + 1
        elif c == '.' or c == ' ':
            count += 1
        elif c == ',':
            count += 2
        elif c == '!':
            count += 3

    return count
    

if __name__ == '__main__':
    assert checkio('diamonds are forever') == 38, 'First'
    assert checkio('just do it') == 18, 'Second'
    assert checkio('tastes great, less filling') == 48, 'Third'
    print ('All is ok')
