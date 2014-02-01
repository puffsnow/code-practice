def checkio(data):

    #replace this for solution
    return data.count('a')

#These "asserts" using only for self-checking and not necessary for auto-testing
if __name__ == '__main__':
    assert checkio('This task is awesome!') == 2, '1st example'
    assert checkio('All tasks are awesome and interesting') == 4, '2nd example'
