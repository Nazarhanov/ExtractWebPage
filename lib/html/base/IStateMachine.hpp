#ifndef HtmlStringParser_IStateMachine_H
#define HtmlStringParser_IStateMachine_H


#include <unordered_map>


namespace HtmlStringParser {

    template<class T>
    class IStateMachine {
    
    protected:

        int state = -1;
        std::unordered_map <int, T*> transitions;

    public:

        void setState(const int &state);
        int getState();

        void setTransition(const int &state, T* transition);
        T* getTransition(const int &state);

        virtual void step() = 0;

    };

}


#include "IStateMachine.inl"
#endif
