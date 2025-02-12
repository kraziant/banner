#include <chrono>
#include <iostream>

int main(int, char **) {

  int time = std::chrono::duration_cast<std::chrono::microseconds>(
                 std::chrono::system_clock::now().time_since_epoch())
                 .count();

  bool chooser = (time / 5000) % 2;

  unsigned int retval = (chooser) ? time : 0;

  std::clog << retval << "\n";

  return 0;
}
