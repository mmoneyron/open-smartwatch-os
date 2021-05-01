#ifndef OSW_APP_HISTOGRAM_H
#define OSW_APP_HISTOGRAM_H

#include <osw_hal.h>

#include "osw_app.h"

class OswAppHistogram : public OswApp {
 public:
  OswAppHistogram(void){};
  void setup(OswHal* hal);
  void loop(OswHal* hal);
  void stop(OswHal* hal);
  ~OswAppHistogram(){};

 private:
};

#endif