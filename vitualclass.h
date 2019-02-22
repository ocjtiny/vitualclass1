#ifndef VITUALCLASS_H
#define VITUALCLASS_H
#include <string>
class vitualclass
{
public:
    vitualclass();

    virtual  void sayhello(std::string)=0;
};

#endif // VITUALCLASS_H
