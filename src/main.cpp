#include "session.h"

#include <iostream>

int main(int argc, char *argv[])
{
  Session session{};
  session.shunting_loop();
  return 0;
}
