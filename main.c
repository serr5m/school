#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char tracks[][80] = {
    "Петушок золоотй гребешок", "дырюльник который поет",
    "манарбек казах",           "poshel nachuy",
    "почему ты такой дырка",
};

void find_track(char search_for[]) {
  int i;
  for (i = 0; i < 5; i++) {
    if (strstr(tracks[i], search_for)) {
      printf("Песня номер: %i: '%s'\n", i, tracks[i]);
    }
  }
}

int main() {
  setlocale(LC_ALL, "RUS");

  char search_for[80];
  // printf("Find: ");
  //  fgets(search_for, 80, stdin);
  //  search_for[strlen(search_for) - 1] = '\0';
  //  find_track(search_for);

  printf("%s", tracks[2]);
  return 0;
}
