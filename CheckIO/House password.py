def checkio(data):
    upper_flag = 0
    lower_flag = 0
    digit_flag = 0
    if len(data) < 10:
        return False
    for c in data:
        if c.isupper():
            upper_flag = 1
        elif c.islower():
            lower_flag = 1
        elif c.isdigit():
            digit_flag = 1
        else:
            pass
        if upper_flag + lower_flag + digit_flag == 3:
            return True

    return False

if __name__ == '__main__':
    assert checkio('A1213pokl')==False, 'First'
    assert checkio('bAse730onE4')==True, 'Second'
    assert checkio('asasasasasasasaas')==False, 'Third'
    assert checkio('QWERTYqwerty')==False, 'Fourth'
    assert checkio('123456123456')==False, 'Fifth'
    assert checkio('QwErTy911poqqqq')==True, 'Sixth'
    print('All ok')
