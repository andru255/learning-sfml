/*
  Drawing a single grid with lines
*/

#include <SFML/Graphics.hpp>

int main(){

  //Setting dimensions for my window
  int videoWidth = 300;
  int videoHeight = 300;
  sf::VideoMode videoDimentions(videoWidth, videoHeight);
  sf::String title = "Single lines!";

  //Setting features for the line A
  int lineAWidth = 100;
  int lineAHeight = 10;
  int lineAX = 0;
  int lineAY = 0;
  sf::Vector2f lineAdimentions(lineAWidth, lineAHeight);

  //Setting features for the line A
  int lineBWidth = 10;
  int lineBHeight = 100;
  int lineBX = 0;
  int lineBY = 0;
  sf::Vector2f lineBdimentions(lineBWidth, lineBHeight);

  //Render a window
  sf::RenderWindow window(videoDimentions, title);

  //Render the line A
  sf::RectangleShape lineA(lineAdimentions);
  lineA.setPosition(lineAX, lineAY);

  //Render the line B
  sf::RectangleShape lineB(lineBdimentions);
  lineB.setPosition(lineBX, lineBY);

  //loop
  while(window.isOpen()){
    sf::Event event;
    while(window.pollEvent(event)){
      if(event.type == sf::Event::Closed){
        window.close();
      }
    }
    window.clear();
    window.draw(lineA);
    window.draw(lineB);
    window.display();
  }

  return 0;
}
