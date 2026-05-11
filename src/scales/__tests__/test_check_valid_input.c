#include "../check_valid_input.h"
#include "../../utils/utils.h"
#include <assert.h>
#include <stdio.h>

void test_check_valid_input() {
  assert(check_valid_input("1111") == 1);
  printf("check_valid_input -> should return true for 1111");
  add_new_line(1);

  assert(check_valid_input("1111.11") == 1);
  printf("check_valid_input -> should return true for 1111.11");
  add_new_line(1);

  assert(check_valid_input("-1111") == 1);
  printf("check_valid_input -> should return true for -1111");
  add_new_line(1);

  assert(check_valid_input("-1111.11") == 1);
  printf("check_valid_input -> should return true for -1111.11");
  add_new_line(1);

  assert(check_valid_input("123asdf1") == 0);
  printf("check_valid_input -> should return false for alphaneumeric");
}
