#ifndef HtmlStringParser_Transitions_Text_H
#define HtmlStringParser_Transitions_Text_H


#include "../details/IHtmlTransition.hpp"


namespace HtmlStringParser::Transitions {

    class Text : public IHtmlTransition {
    
    using IHtmlTransition::IHtmlTransition;

    public:

        void enter(const int& prevState);
        void process();
        void exit(const int& nextState);
        void unstaged();

    };

}


#endif
