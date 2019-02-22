#include "classb.h"

ClassB::ClassB()
{
}

#include <iostream>
void ClassB::sayhello (std::string words)
{
    std::cout<<"ClassB::sayhello, "<< words << std::endl;
}
