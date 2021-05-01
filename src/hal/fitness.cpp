
#include "osw_hal.h"
#include "osw_pins.h"

void OswHal::setWeekSteps(uint16_t *wsteps) {
  for (int i = 0; i < 7; i++) {
    _week_steps[i] = wsteps[i];
  }
}

void OswHal::getWeekSteps(uint16_t *wsteps) {
  for (int i = 0; i < 7; i++) {
    wsteps[i] = _week_steps[i];
  }
}