#include "Entry.hpp"
using namespace HtmlStringParser;


#include <iostream>


#include "details/HtmlMachine.hpp"
#include "details/EHtmlState.hpp"

#include "builder/HtmlMachineBuilder.hpp"
#include "helpers/TextWorker.hpp"

#include "transitions/Text.hpp"
#include "transitions/OpenTag.hpp"


Entry::Entry() {
    // TextWorker *tw = new TextWorker;
    HtmlMachineBuilder<> builder;

    builder.add(TEXT, new Transitions::Text);
    builder.add(OPEN_TAG, new Transitions::OpenTag);

    this->machine = builder.build();
    
    std::cout << this->machine->getState() << '\n';
    this->machine->setState(TEXT);
    std::cout << this->machine->getState() << '\n';
    this->machine->step();
    std::cout << this->machine->getState() << '\n';
}


Entry::~Entry() {

}
