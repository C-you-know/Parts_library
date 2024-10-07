
#include "parts.h"

auto L1 = LED(1,2);
auto L2 = LED(14,15);
auto L3 = LED(3,4);
auto L4 = LED(16,17);

void setup() 
{
  L1.initialize();
  L2.initialize();
  L3.initialize();
  L4.initialize();
}

void loop() 
{
  delay(1000);
  L1.on();
  L2.off();
  L3.on();
  L4.off();
  delay(1000);
  L1.off();
  L2.on();
  L3.off();
  L4.on();
}
