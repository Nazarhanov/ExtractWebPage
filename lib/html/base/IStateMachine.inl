#include "IStateMachine.hpp"
using namespace HtmlStringParser;


template<class T>
void IStateMachine<T>::setState(const int &state) {
    this->state = state;
}


template<class T>
int IStateMachine<T>::getState() {
    return this->state;
}


template<class T>
void IStateMachine<T>::setTransition(const int &state, T* transition) {
    this->transitions[state] = transition;
}


template<class T>
T* IStateMachine<T>::getTransition(const int &state) {
    if (this->transitions.find(state) != this->transitions.end()) 
        return this->transitions[state];
    return nullptr;
}
