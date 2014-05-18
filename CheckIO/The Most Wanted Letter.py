def checkio(text):
  text = text.lower()
  Mostchar = 'a'
  Frequency = text.count('a')
  charList = ['b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n','o', 'p', 'q',
              'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
  for char in charList:
    CurrentFrequency = text.count(char)
    if CurrentFrequency > Frequency:
      Mostchar = char
      Frequency = CurrentFrequency
  return Mostchar

#These "asserts" using only for self-checking and not necessary for auto-testing
if __name__ == '__main__':
  assert checkio("Hello World!") == "l", "Hello test"
  assert checkio("How do you do?") == "o", "O is most wanted"
  assert checkio("One") == "e", "All letter only once."
  assert checkio("Oops!") == "o", "Don't forget about lower case."
  assert checkio("AAaooo!!!!") == "a", "Only letters."
  assert checkio("abe") == "a", "The First."
  print("Start the long test")
  assert checkio("a" * 9000 + "b" * 1000) == "a", "Long."
  print("The local tests are done.")