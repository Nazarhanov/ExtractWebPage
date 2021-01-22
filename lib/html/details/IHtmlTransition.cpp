#include "IHtmlTransition.hpp"
using namespace HtmlStringParser;


#include "../base/IStateMachine.hpp"
#include "../helpers/TextWorker.hpp"


IHtmlTransition::IHtmlTransition(IStateMachine<IHtmlTransition>* machine, TextWorker* text) {
    this->machine = machine;
    this->text = text;
}


IHtmlTransition::~IHtmlTransition() {

}


void IHtmlTransition::enter(const int& prevState) {

}


void IHtmlTransition::process() {

}


void IHtmlTransition::exit(const int& nextState) {

}


void IHtmlTransition::unstaged() {

}
