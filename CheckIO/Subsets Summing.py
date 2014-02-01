def checkio(n):
    '''
    Let G(S) denote the sum of the elements of set S and F(n) be the sum of G(s) 
    for all subsets of the set consisting of the first n natural numbers. 
    For example, F(3) = (1) + (2) + (3) + (1 + 2) + (1 + 3) + (2 + 3) + (1 + 2 + 3) = 24. 
    Given n, calculate F(1) + F(2) + ... + F(n)
    '''
    ans = 0

    for i in range(1, n + 1):
        for j in range(1, i + 1):
            ans += j * (2 ** (i - 1))

    return ans

if __name__ == '__main__':
    assert checkio(2) == 7, "First"
    assert checkio(3) == 31, "Second"
    assert checkio(1) == 1, "Third"
    assert checkio(4) == 111, "4"
    print('All ok')
