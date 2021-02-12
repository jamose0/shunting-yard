#ifndef SESSION_H
#define SESSION_H

#include <iostream>

class Session final
{
 private:

 public:
  Session()
  {
    std::cout << "Creating session!\n";
  }

  bool shunting_loop() const final;
};
#endif
