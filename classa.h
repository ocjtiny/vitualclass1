#ifndef CLASSA_H
#define CLASSA_H
#include "vitualclass.h"

#include <string>
class ClassA
{
public:
    ClassA();

    void SetVClass(vitualclass* vc)
    {
       a = vc;
    }
    void SaySth(std::string words)
    {
        if(a != nullptr) {
            a->sayhello (words);
        }
    }

    vitualclass *a=nullptr;
};

#endif // CLASSA_H
