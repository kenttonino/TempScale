#include <stdio.h>

void add_new_line(int num) {
  for (int i = 0; i < num; i++) {
    printf("\n");
  }
}

void add_new_tab(void) { printf("\t"); }
