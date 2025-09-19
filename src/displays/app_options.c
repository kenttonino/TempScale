#include "ansi_color_codes.h"
#include "escape_sequence.h"

void app_options(void) {
  // * Celsius option.
  add_new_tab();
  printf(" %s[%s %s1%s %s]%s Celsius (°C)", BLUE, RESET, GREEN, RESET, BLUE,
         RESET);
  add_new_line(1);

  // * Fahrenheit option.
  add_new_tab();
  printf(" %s[%s %s2%s %s]%s Fahrenheit (°F)", BLUE, RESET, GREEN, RESET, BLUE,
         RESET);
  add_new_line(1);

  // * Kelvin option.
  add_new_tab();
  printf(" %s[%s %s3%s %s]%s Kelvin (°K)", BLUE, RESET, GREEN, RESET, BLUE,
         RESET);
  add_new_line(1);

  // * Rankine option.
  add_new_tab();
  printf(" %s[%s %s4%s %s]%s Rankine (°R)", BLUE, RESET, GREEN, RESET, BLUE,
         RESET);
  add_new_line(1);

  // * Rankine option.
  add_new_tab();
  printf(" %s[%s %s5%s %s]%s Exit", BLUE, RESET, GREEN, RESET, BLUE, RESET);
}
