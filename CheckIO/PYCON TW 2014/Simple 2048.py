def checkio(map, command):
  ## 0. Copy an original map
  OriginalMap = CopyMap(map)
  ## 1. convert the matrix into the direction
  OutputMap = ConvertMap(map, command)
  ## 2. move the elements
  OutputMap = MoveElements(OutputMap)
  ## 3. convert back
  OutputMap = ConvertBackMap(OutputMap, command)
  ## 4. add the new 2 into map
  if(OriginalMap != OutputMap):
    OutputMap = AddNewElement(OutputMap)
  return OutputMap
  
def MoveElements(map):
  for row in map:
    flag = [0, 0, 0, 0]
    for i in range(4):
      if row[i] == 0:
        continue
      for j in range(4):
        if j >= i:
          break
        if row[j] == 0:
          row[j] = row[i]
          row[i] = 0
          break
        if flag[j] == 0 and row[j] == row[i]:
          row[j] = row[j] + row[i]
          row[i] = 0
          flag[j] = 1
          break
  return map

def ConvertMap(map, command):
  Elements = []
  for row in map:
    Elements = Elements + row
  if command == "left":
    return map
  if command == "right":
    return [[Elements[3], Elements[2], Elements[1], Elements[0]],
            [Elements[7], Elements[6], Elements[5], Elements[4]],
            [Elements[11], Elements[10], Elements[9], Elements[8]],
            [Elements[15], Elements[14], Elements[13], Elements[12]]]
  if command == "up":
    return [[Elements[3], Elements[7], Elements[11], Elements[15]],
            [Elements[2], Elements[6], Elements[10], Elements[14]],
            [Elements[1], Elements[5], Elements[9], Elements[13]],
            [Elements[0], Elements[4], Elements[8], Elements[12]]]
  if command == "down":
    return [[Elements[12], Elements[8], Elements[4], Elements[0]],
            [Elements[13], Elements[9], Elements[5], Elements[1]],
            [Elements[14], Elements[10], Elements[6], Elements[2]],
            [Elements[15], Elements[11], Elements[7], Elements[3]]]

def ConvertBackMap(map, command):
  Elements = []
  for row in map:
    Elements = Elements + row
  if command == "left":
    return map
  if command == "right":
    return [[Elements[3], Elements[2], Elements[1], Elements[0]],
            [Elements[7], Elements[6], Elements[5], Elements[4]],
            [Elements[11], Elements[10], Elements[9], Elements[8]],
            [Elements[15], Elements[14], Elements[13], Elements[12]]]
  if command == "down":
    return [[Elements[3], Elements[7], Elements[11], Elements[15]],
            [Elements[2], Elements[6], Elements[10], Elements[14]],
            [Elements[1], Elements[5], Elements[9], Elements[13]],
            [Elements[0], Elements[4], Elements[8], Elements[12]]]
  if command == "up":
    return [[Elements[12], Elements[8], Elements[4], Elements[0]],
            [Elements[13], Elements[9], Elements[5], Elements[1]],
            [Elements[14], Elements[10], Elements[6], Elements[2]],
            [Elements[15], Elements[11], Elements[7], Elements[3]]]

def AddNewElement(map):
  for i in range(4):
    for j in range(4):
      if(map[3-i][3-j] == 0):
        map[3-i][3-j] = 2
        return map
      
def CopyMap(map):
  OutputMap = []
  for row in map:
    OutputMap.append(list(row))
  return OutputMap

def PrintMap(map):
  for row in map:
    print(row)
  print("--")

#These "asserts" using only for self-checking and not necessary for auto-testing
if __name__ == '__main__':
  #PrintMap([[0,0,0,0],[0,0,0,0],[0,0,2,0],[0,2,0,0]])
  #PrintMap(checkio([[0,0,0,0],[0,0,0,0],[0,0,2,0],[0,2,0,0]], 'up'))
  #PrintMap([[2,0,0,0],[0,2,0,0],[0,0,0,0],[0,0,0,2]])
  #PrintMap(checkio([[2,0,0,0],[0,2,0,0],[0,0,0,0],[0,0,0,2]], 'left'))
  #checkio([[2,2,2,2],[2,2,4,0],[16,0,8,2],[0,0,0,2]], 'up')
  #checkio([[0,0,0,0],[0,0,0,0],[0,0,0,0],[2,2,2,2]],"left")
  #checkio([[0,0,0,0],[0,0,0,0],[0,0,0,0],[4,4,0,2]],"right")
  checkio([[0,0,128,32],[0,0,32,2],[0,16,2,256],[0,16,32,64]],"right")
  #assert checkio([[0,0,0,0],[0,0,0,0],[0,0,2,0],[0,2,0,0]], 'up') == [[0,2,2,0],[0,0,0,0],[0,0,0,0],[0,0,0,2]] 
  #assert checkio([[2,0,0,0],[0,2,0,0],[0,0,0,0],[0,0,0,2]], 'left') == [[0,0,0,2],[0,0,0,2],[0,0,0,0],[0,0,2,2]]
  print('Done')