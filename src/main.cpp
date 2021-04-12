// Copyright 2021 Kuznetsov Mikhail
#include <iostream>
#include <string>
#include "TimedDoor.h"

int main() {
  TimedDoor* timedDoor1 =
  new TimedDoor(5);  // create door with 10-seconds timer
  try {
    timedDoor1->unlock();
    timedDoor1->throwState();
  } catch (std::string notice1) {
    std::cout << notice1 << std::endl;  // the door is opened!
  }
  TimedDoor* timedDoor2 = new TimedDoor(5);
  try {
    timedDoor2->unlock();
  } catch (std::string notice2) {
    std::cout << notice2 << std::endl;  // close the door!
  }
  TimedDoor* timedDoor3 = new TimedDoor(5);
  try {
    timedDoor3->lock();
    timedDoor3->throwState();
  } catch (std::string notice3) {
    std::cout << notice3 << std::endl;  // the door is closed!
  }
  return 0;
}
