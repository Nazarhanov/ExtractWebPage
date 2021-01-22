#include "OpenTag.hpp"
using namespace HtmlStringParser::Transitions;


#include <iostream>


#include "../details/EHtmlState.hpp"


void OpenTag::enter(const int& prevState) {
    // 
}


void OpenTag::process() {
    std::cout << "OpenTag process" << '\n';
}


void OpenTag::exit(const int& nextState) {
    // 
}


void OpenTag::unstaged() {
    // 
}
