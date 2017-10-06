#include <stdio.h>

int picked[6];
int numbers[30];
int total;

int lotto (int pointer, int picked_count) {
  int i;

  if (picked_count == 6) {
    printf("%d %d %d %d %d %d\n", picked[0], picked[1], picked[2], picked[3], picked[4], picked[5]);
    return 1;
  }
  if (total - pointer < 6 - picked_count) return 0;

  for (i=pointer; i<total; i++) {
    picked[picked_count] = numbers[i];
    lotto(i+1, picked_count+1);
  }
}

int main() {
  int i;
  int flag = 0;

  while (1) {
    scanf("%d", &total);
    if (total == 0) break;
    if (flag == 1) {
      printf("\n");
    } else {
      flag = 1;
    }

    for (i=0; i<total; i++) {
      scanf("%d", &numbers[i]);
    }

    lotto(0, 0);
  }

  return 0;
}
