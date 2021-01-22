#ifndef HtmlStringParser_HtmlMachine_H
#define HtmlStringParser_HtmlMachine_H


#include "../base/IStateMachine.hpp"
#include "IHtmlTransition.hpp"


namespace HtmlStringParser {

    class HtmlMachine : public IStateMachine<IHtmlTransition> {

    public:

        void step();

    };

}


#endif
