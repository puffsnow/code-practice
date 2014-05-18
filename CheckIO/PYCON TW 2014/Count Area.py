GlobalState = []

def checkio(state):
  global GlobalState 
  GlobalState= state
  CountList = []
  for i in range(9):
    for j in range(9):
      if GlobalState[i][j] == 0:
        CountList.append(CountAreaSize(i,j))
        #for row in state:
        #  print(row)
        #print("--")
  
  CountList.sort()
  return CountList

def CountAreaSize(i, j):
  global GlobalState
  if i < 0 or i > 8 or j < 0 or j > 8:
    return 0 
  if(GlobalState[i][j] == 1):
    return 0
  
  GlobalState[i][j] = 1
  Count = 1 + CountAreaSize(i+1, j) + CountAreaSize(i-1, j) + CountAreaSize(i, j+1) + CountAreaSize(i, j-1)
  #print(str(i) + "." + str(j) + ":" + str(Count))
  return Count

if __name__ == '__main__':
  #print( checkio([[0,0,0,0,1,0,1,0,0],
  #                [0,0,0,1,1,0,1,0,0],
  #                [0,0,0,1,0,0,1,0,0],
  #                [0,0,1,1,1,1,1,1,1],
  #                [1,1,1,0,1,1,0,1,0],
  #                [0,0,1,0,1,1,0,1,0],
  #                [0,0,1,0,0,0,0,1,0],
  #                [0,0,1,1,1,1,1,1,0],
  #                [0,0,0,0,0,0,0,1,0]]))
  assert checkio([[0,0,0,0,1,0,1,0,0],
                  [0,0,0,1,1,0,1,0,0],
                  [0,0,0,1,0,0,1,0,0],
                  [0,0,1,1,1,1,1,1,1],
                  [1,1,1,0,1,1,0,1,0],
                  [0,0,1,0,1,1,0,1,0],
                  [0,0,1,0,0,0,0,1,0],
                  [0,0,1,1,1,1,1,1,0],
                  [0,0,0,0,0,0,0,1,0]]) == [4,5,6,8,12,13]
  print('Done')