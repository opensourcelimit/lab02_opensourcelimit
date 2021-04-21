#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"
using namespace std;
int main()
{

   Box b1;
   initBox(&b1, 3.123456, 4.123456, 10, 7);

  // assertEquals("ul=(3,4), w=10,h=7", boxToString(b1,1), "boxToString(b1,1)");
   assertEquals("ul=(3.1,4.1), w=10,h=7", boxToString(b1,2), "boxToString(b2,2)");
   assertEquals("ul=(3.12,4.12), w=10,h=7", boxToString(b1,3), "boxToString(b3,3)");
   assertEquals("ul=(3.123,4.123), w=10,h=7", boxToString(b1,4), "boxToString(b4,4)");
   assertEquals("ul=(3.1235,4.1235), w=10,h=7", boxToString(b1,5), "boxToString(b5,5)");
   assertEquals("ul=(3.12346,4.12346), w=10,h=7", boxToString(b1,6), "boxToString(b6,6)");



   return 0;
}
