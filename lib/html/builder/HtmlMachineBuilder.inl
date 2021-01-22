#include "HtmlMachineBuilder.hpp"
using namespace HtmlStringParser;


#include <tuple>
#include <utility>


#include "../details/HtmlMachine.hpp"
#include "../details/IHtmlTransition.hpp"


template<class... Args>
HtmlMachineBuilder<Args...>::HtmlMachineBuilder(Args*... args) {
    this->machine = new HtmlMachine;
    this->args = std::make_tuple(std::forward<Args*>(args)...);
}


template<class... Args>
HtmlMachineBuilder<Args...>::~HtmlMachineBuilder() {

}


template<class... Args>
void HtmlMachineBuilder<Args...>::add(const int& state, IHtmlTransition* transition) {
    auto tuple = std::make_tuple(this->machine);
    auto merged = std::tuple_cat(tuple, std::move(this->args));
    *transition = std::make_from_tuple<IHtmlTransition>(merged);
    this->machine->setTransition(state, transition);
}


template<class... Args>
HtmlMachine* HtmlMachineBuilder<Args...>::build() {
    return this->machine;
}
