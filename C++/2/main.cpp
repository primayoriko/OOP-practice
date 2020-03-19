// main.cpp
#include "A.hpp"
#include "B.hpp"

void sets(A *x, int y)
{
  x->setValue(y);
}

int main()
{
  B b; /** ANDA HARUS MENGGUNAKAN DEFAULT CONSTRUCTOR */
  sets(&b, 888);

  b.setValue(10888);

  b.print(); // OUTPUT: (888, 10888)
  return 0;
}
