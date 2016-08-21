/*
  Drawing a single circle with SFML on ubuntu
*/

#include <SFML/Graphics.hpp>

int main(){

  //Setting dimensions for my window
  int videoWidth = 300;
  int videoHeight = 300;

  //Setting features for the circle
  float circleRadius = 100.f;
  sf::Color colorRadius = sf::Color::Red;

  //Render a window
  sf::RenderWindow window(sf::VideoMode(videoWidth, videoHeight), "Single Circle!");

  //Creating a Single Circle
  sf::CircleShape circle(circleRadius);
  circle.setFillColor(colorRadius);

  //loop
  while(window.isOpen()){
    sf::Event event;
    while(window.pollEvent(event)){
      if(event.type == sf::Event::Closed){
        window.close();
      }
    }
    window.clear();
    window.draw(circle);
    window.display();
  }

  return 0;
}
