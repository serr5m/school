#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_reverse(char *s) {
  size_t len = strlen(s);
  char *t = s + len - 1;
  while (t > s) {
    printf("%c", *t);
    t = t - 1;
  }
  puts("");
}

int main() {
  char word[10];
  int i = 0;
  while (scanf("%9s", word) == 1) {
    i = i + 1;
    if (i % 2) {
      fprintf(stdout, "%s\n", word);
    } else {
      fprintf(stderr, "%s\n", word);
    }
  }
  return 0;
}
