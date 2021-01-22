#ifndef HtmlStringParser_IHtmlTransition_H
#define HtmlStringParser_IHtmlTransition_H


#include "../base/IStateMachine.hpp"
#include "../helpers/TextWorker.hpp"


namespace HtmlStringParser {

    class IHtmlTransition {

    protected:

        IStateMachine<IHtmlTransition>* machine;
        TextWorker* text;

    public:

        explicit IHtmlTransition(IStateMachine<IHtmlTransition>* machine = nullptr, TextWorker* text = nullptr);
        ~IHtmlTransition();

        virtual void enter(const int& prevState);
        virtual void process();
        virtual void exit(const int& nextState);
        virtual void unstaged();

    };

}


#endif
