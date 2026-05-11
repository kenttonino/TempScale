#include "assert.h"
#include "../app_option.c"

void test_app_option(void) {
  assert(sizeof(app_option()) == sizeof(int));
  printf("%sapp_option -> should return the correct type size%s", GREEN, RESET);
}
