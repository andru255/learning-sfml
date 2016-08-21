/*
  Drawing a single texts
*/

#include <SFML/Graphics.hpp>
#include <iostream>

int main(){

  //Setting dimensions for my window
  int videoWidth = 300;
  int videoHeight = 300;
  sf::VideoMode videoDimentions(videoWidth, videoHeight);
  sf::String title = "Single texts!";

  sf::Font fontFamily;
  if (!fontFamily.loadFromFile("../common/Consolas.ttf")){
    std::cout << "Error! Can't be loaded the font";
  }

  //Setting features for the text A
  sf::String textA = "Hello I'm textA";
  int textAX = 0;
  int textAY = 0;
  sf::Color textAColor = sf::Color::Red;

  //Setting features for the text B
  sf::String textB = "Hello I'm textB";
  int textBX = 15;
  int textBY = 20;

  //Render a window
  sf::RenderWindow window(videoDimentions, title);

  //Render the text A
  sf::Text textASelf;
  textASelf.setFont(fontFamily);
  textASelf.setString(textA);
  textASelf.setPosition(textAX, textAY);
  textASelf.setColor(textAColor);

  //Render the line B
  sf::Text textBSelf;
  textBSelf.setFont(fontFamily);
  textBSelf.setString(textB);
  textBSelf.setPosition(textBX, textBY);

  //loop
  while(window.isOpen()){
    sf::Event event;
    while(window.pollEvent(event)){
      if(event.type == sf::Event::Closed){
        window.close();
      }
    }
    window.clear();
    window.draw(textASelf);
    window.draw(textBSelf);
    window.display();
  }

  return 0;
}
