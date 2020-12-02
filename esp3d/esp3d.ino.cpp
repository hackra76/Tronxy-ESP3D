# 1 "C:\\Users\\Rado\\AppData\\Local\\Temp\\tmpn22a0_c1"
#include <Arduino.h>
# 1 "D:/3D printer/Software/BTT/Tronxy-ESP3D/esp3d/esp3d.ino"
# 21 "D:/3D printer/Software/BTT/Tronxy-ESP3D/esp3d/esp3d.ino"
#include "src/core/esp3d.h"


Esp3D myesp3d;
void setup();
void loop();
#line 27 "D:/3D printer/Software/BTT/Tronxy-ESP3D/esp3d/esp3d.ino"
void setup()
{
    myesp3d.begin();
}


void loop()
{
    myesp3d.handle();
}