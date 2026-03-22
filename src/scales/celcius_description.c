#include "../utils/utils.h"

void celsius_description(void) {
  add_new_tab(1);
  printf("%s--------------------------------------------------%s", BLUE, RESET);
  add_new_line(2);
  add_new_tab(2);
  printf("   %sCelsius (°C) to Other Scale%s", GREEN, RESET);
  add_new_line(2);
  add_new_tab(1);
  printf("%s--------------------------------------------------%s", BLUE, RESET);
}
