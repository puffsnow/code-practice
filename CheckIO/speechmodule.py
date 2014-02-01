FIRST_TEN = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"] 
SECOND_TEN = ["ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"]
OTHER_TENS = ["twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"]
HUNDRED = "hundred"

def checkio(number):
    if int(number / 100) > 0:
        output = [FIRST_TEN[int(number / 100)] + " " + HUNDRED]
        number -= 100 * int(number / 100)
    else:
        output = []

    if number > 9 and number < 20:
        output += [SECOND_TEN[number - 10]]
        number -= number
    elif number >= 20:
        output += [OTHER_TENS[int(number / 10) - 2]]
        number -= 10 * int(number /10)

    if number == 0 and len(output) == 0:
        output += [FIRST_TEN[0]]
    elif number != 0:
        output += [FIRST_TEN[number]]

    output_str = output[0]
    del(output[0])

    for st in output:
        output_str += " " + st
    return output_str

if __name__ == '__main__':
    
    assert checkio(4) == 'four', "First"
    assert checkio(133) == 'one hundred thirty three', "Second"
    assert checkio(12)=='twelve', "Third"
    assert checkio(101)=='one hundred one', "Fifth"
    assert checkio(212)=="two hundred twelve", "Sixth"
    assert checkio(0)=="zero", "Seventh"
    assert checkio(40)=='forty', "Eighth, forty - it is correct"
    assert checkio(20)=="twenty", "Nighth"
    print('All ok')
