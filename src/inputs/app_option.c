#include "../displays/ansi_color_codes.h"
#include "../displays/escape_sequence.h"

int app_option(void) {
  int option = 0;
  static char garbage_buffer[1000];

  add_new_tab(1);
  printf(" %sEnter the option:%s ", BLUE, RESET);
  scanf("%d", &option);
  fgets(garbage_buffer, sizeof(garbage_buffer), stdin);

  return option;
}
