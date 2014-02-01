def checkio(string):
    words = string.split(' ')
    outList = []
    for word in words:
        if word != '':
            outList.append(word)
    return ' '.join(outList)
    
if __name__ == '__main__':
    assert checkio('I  like   python') == "I like python", 'First'
    print('All ok')
