#include "../utils/utils.h"

void app_description(void) {
  add_new_tab(1);
  printf("%s--------------------------------------------------%s", BLUE, RESET);
  add_new_line(2);
  add_new_tab(3);
  printf("    %sTempScale%s", GREEN, RESET);
  add_new_line(2);
  add_new_tab(1);
  printf("   A CLI tool for converting temperature scale.");
  add_new_line(2);
  add_new_tab(1);
  printf("%s--------------------------------------------------%s", BLUE, RESET);
}
