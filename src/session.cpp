#include "session.h"

#include <iostream>
#include <string>

bool Session::shunting_loop() const final
{
  while (true)
    {
      std::cout << "Shunting-yard : ";
      std::string s{};
      std::getline(std::cin, s);
      std::cout << "Your input: " << s << '\n';

      // call parse()
      if (s.compare("quit"))
	{
	  std::cout << "Bye bye!\n";
	  return true;
	}
    }
  return false;
}
