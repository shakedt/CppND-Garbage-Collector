#include "gc_pointer.h"
#include "LeakTester.h"

int main()
{
    std::cout << "hell2o";
    Pointer<int> p;
    p = new int(19);
    p = new int(21);
    p = new int(28);
  //  Pointer<int> p = new int(19);
  //  p = new int(21);
//    p = new int(28);

    return 0;
}
