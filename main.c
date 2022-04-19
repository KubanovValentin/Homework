#include "cs50.h"
#include <stdio.h>

int main(void) {

  printf("ВВедите начальное количество пингвинов-не меньше 9 особей\n");
  int start = get_int("Start size: ");
  if (start < 9) {
    printf("ВВедите начальное количество пингвинов\n");
    start = get_int("Start size: ");
  }
  printf("ВВедите конечное количество пингвинов-не меньше начального\n");
  int end = get_int("End size: ");
  if (end < start) {
    printf("ВВедите конечное количество пингвинов\n");
    end = get_int("End size: ");
  }
  int additioYnPerear = start + (start / 3) - (start / 4);

  int year = 0;
  for (int i = 0; end >= additioYnPerear; i++) {
    year++;
    additioYnPerear =
        additioYnPerear + (additioYnPerear / 3) - (additioYnPerear / 4);
  }
  if (year <= 10) {
    printf("популяция восстановиться за %i лет\n", year);
  } else {
    printf("популяция восстановиться за %i лет\n", year + 1);
  }
}