#ifndef HtmlStringParser_HtmlMachineBuilder_H
#define HtmlStringParser_HtmlMachineBuilder_H


#include <tuple>


#include "../details/HtmlMachine.hpp"
#include "../details/IHtmlTransition.hpp"


namespace HtmlStringParser {

    template<class... Args>
    class HtmlMachineBuilder {

    protected:

        HtmlMachine* machine = nullptr;
        std::tuple<Args*...> args;

    public:

        explicit HtmlMachineBuilder(Args*... args);
        ~HtmlMachineBuilder();

        void add(const int& state, IHtmlTransition* transition);
        HtmlMachine* build();

    };

}


#include "HtmlMachineBuilder.inl"
#endif