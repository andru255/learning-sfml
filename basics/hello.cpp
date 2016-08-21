/*
  A Hello World with some colors and animations
*/
#include "./helpers/colors.h"
#include <iostream>
#include <unistd.h>

int main(){
  std::cout << "Getting start in c++!" << std::endl;

  //Well now with color
  Color::Modifier textRed(Color::FG_RED);
  Color::Modifier textBlue(Color::FG_BLUE);
  Color::Modifier textGreen(Color::FG_GREEN);
  Color::Modifier textDefault(Color::FG_DEFAULT);

  std::cout << textRed << "Getting";
  std::cout << textBlue << " start";
  std::cout << textGreen << " in c++!" << std::endl;

  //Well now with some animation
  for (;;){
    sleep(1);
    std::cout << "\b\b\b\\o/" << std::flush;
    sleep(1);
    std::cout << "\b\b\b/o\\" << std::flush;
  }

  //for cancel the execution press Ctrl + C (2 times)
};
