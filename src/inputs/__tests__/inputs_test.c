#include "../../utils/utils.h"
#include "./test_app_option.c"
#include "assert.h"

int main(void) {
  clear_terminal();
  add_new_line(2);

  test_app_option();
  add_new_line(2);

  return 0;
}
