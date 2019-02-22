#ifndef CLASSB_H
#define CLASSB_H
#include "vitualclass.h"
class ClassB: public vitualclass
{
public:
    ClassB();

    void sayhello (std::string words);
};

#endif // CLASSB_H
