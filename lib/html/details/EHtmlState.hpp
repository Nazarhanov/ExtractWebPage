#ifndef HTMLStringParser_EHtmlState_H
#define HTMLStringParser_EHtmlState_H


namespace HtmlStringParser {

    enum EState {
      NONE         = 0,
      OPEN_TAG     = 1 << 1,
      CLOSE_TAG    = 1 << 2,
      SELF_CLOSING = 1 << 3,
      ATTR_NAME    = 1 << 4,
      ATTR_VALUE   = 1 << 5,
      TEXT         = 1 << 6,
      COMMENT      = 1 << 7,
      ONELINE      = 1 << 8,
      MULTILINE    = 1 << 9,
      SINGLE_QUOTE = 1 << 10,
      DOUBLE_QUOTE = 1 << 11,
      STYLE_TAG    = 1 << 12,
      SCRIPT_TAG   = 1 << 13,
    };

}


#endif