#ifndef CLASSA_H
#define CLASSA_H
#include "vitualclass.h"

#include <string>
class ClassA
{
public:
    ClassA();

    void SaySth(vitualclass &a, std::string words)
    {
        a.sayhello (words);
    }
};

#endif // CLASSA_H
