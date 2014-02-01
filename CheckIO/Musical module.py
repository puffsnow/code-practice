def checkio(values):
    'Calculate the greatest common divisor of two numbers'
    a, b = values

    while a != 0 and b != 0:
        if a > b:
            a = a % b
        else:
            b = b % a

        if a == 0:
            divi = b
            break
        elif b == 0:
            divi = a
            break

    return divi
    

if __name__ == '__main__':
    assert checkio((12, 8)) == 4, "First"
    assert checkio((14, 21)) == 7, "Second"
    print ('All ok')
