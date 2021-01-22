#include "HtmlMachine.hpp"
using namespace HtmlStringParser;


void HtmlMachine::step() {
    if(this->getTransition(this->state)) {
        this->transitions[this->state]->process();
    }
}
