#include "../../utils/utils.h"
#include "./test_check_valid_input.c"

int main(void) {
  clear_terminal();
  add_new_line(2);

  test_check_valid_input();
  add_new_line(2);

  return 0;
}
