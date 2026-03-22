#include "../utils/utils.h"
#include "escape_sequence.h"

void app_option_error(void) {
  add_new_tab(1);
  printf("%sInvalid option. Please try again.%s", RED, RESET);
}
