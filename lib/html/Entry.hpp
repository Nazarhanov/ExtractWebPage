#ifndef HtmlStringParser_Entry_H
#define HtmlStringParser_Entry_H


#include "details/HtmlMachine.hpp"


namespace HtmlStringParser {

    class Entry {

    private:

        HtmlMachine* machine;

    public:

        explicit Entry();
        ~Entry();

    };

}


#endif
