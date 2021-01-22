#include "Text.hpp"
using namespace HtmlStringParser::Transitions;


#include <iostream>


#include "../details/EHtmlState.hpp"


void Text::enter(const int& prevState) {
    // 
}


void Text::process() {
    std::cout << "Text process" << '\n';
    this->machine->setState(OPEN_TAG);
}


void Text::exit(const int& nextState) {
    // 
}


void Text::unstaged() {
    // 
}
