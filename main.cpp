#include "classa.h"
#include "classb.h"

int main(int argc, char *argv[])
{
    ClassA A;
    ClassB B;

    A.SetVClass (&B);
    A.SaySth ("yoyoyo");

    return 0;
}
