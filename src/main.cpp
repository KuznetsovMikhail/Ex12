// Copyright 2021 Kuznetsov Mikhail
#include <iostream>
#include <string>
#include "TimedDoor.h"

int main() {
  TimedDoor timedDoor(5);  // create door with 10-seconds timer
  try {
    timedDoor.unlock();
  } catch (std::string notice) {
    std::cout << notice << std::endl;  // close the door!
  }
  return 0;
}
