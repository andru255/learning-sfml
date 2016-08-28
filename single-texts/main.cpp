/*
  Drawing a single texts
*/

#include <SFML/Graphics.hpp>
#include "../common/helpers/to_string.h"
#include <iostream>

sf::RenderWindow window;
sf::Font fontFamily;

void generateTexts(){
  sf::Text textSelf;
  int y = 50;
  for(int i=1; i <= 5; i++){
    sf::String textToPrint = "hi! I'm -->"+ toString(i) +" number";
    textSelf.setFont(fontFamily);
    textSelf.setString(textToPrint);
    textSelf.setColor(sf::Color::Green);
    textSelf.setPosition(0,y);
    y += textSelf.getLocalBounds().height;
    window.draw(textSelf);
  }
}

int main(){

  //Setting dimensions for my window
  int videoWidth = 400;
  int videoHeight = 300;
  sf::VideoMode videoDimentions(videoWidth, videoHeight);
  sf::String title = "Single texts!";

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
  window.create(videoDimentions,title);

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
    generateTexts();
    window.display();
  }
  return 0;
}

