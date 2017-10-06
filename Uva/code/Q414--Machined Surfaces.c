#include <stdio.h>
#include <string.h>

int main() {
  int i, j;
  char str[26];

  int line_number;
  char line[26];
  int line_blank;
  int line_blanks[50];
  int smallest_blank;
  int left_blank;

  while (1) {
    smallest_blank = 25;
    left_blank = 0;

    gets(str);
    sscanf(str, "%d", &line_number);
    if (line_number == 0) break;

    for (i=0; i<line_number; i++) {
      line_blank = 0;
      gets(str);
      strcpy(line, str);
      for(j=0; j<25; j++){
        if(line[j] == ' ') line_blank++;
      }
      line_blanks[i] = line_blank;
      if (line_blank < smallest_blank) smallest_blank = line_blank;
    }

    for (i=0; i<line_number; i++) {
      left_blank += line_blanks[i] - smallest_blank;
    }

    printf("%d\n", left_blank);
  }

  return 0;
}
