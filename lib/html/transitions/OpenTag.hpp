#ifndef HtmlStringParser_Transitions_OpenTag_H
#define HtmlStringParser_Transitions_OpenTag_H


#include "../details/IHtmlTransition.hpp"


namespace HtmlStringParser::Transitions {

    class OpenTag : public IHtmlTransition {

    using IHtmlTransition::IHtmlTransition;

    public:
    
        void enter(const int& prevState);
        void process();
        void exit(const int& nextState);
        void unstaged();

    };

}


#endif
