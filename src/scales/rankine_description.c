#include "../utils/utils.h"
#include "../displays/escape_sequence.h"

void rankine_description(void) {
  add_new_tab(1);
  printf("%s--------------------------------------------------%s", BLUE, RESET);
  add_new_line(2);
  add_new_tab(1);
  printf("    %sRankine (°R) to Other Scale%s", GREEN, RESET);
  add_new_line(2);
  add_new_tab(1);
  printf("%s--------------------------------------------------%s", BLUE, RESET);
}
