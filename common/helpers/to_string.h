//template for parse every value to string
//source:
//http://en.sfml-dev.org/forums/index.php?topic=2424.msg15768#msg15768
//How to use:
//sf::String text;
//text.SetText("hi!" + toString(10) + "I'm a number");
#include <sstream>

template <typename T>
std::string toString(const T& x)
{
  std::ostringstream oss;
  oss << x;

  return oss.str();
}
