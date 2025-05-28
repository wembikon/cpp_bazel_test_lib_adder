#include <adder/adder.h>

Adder::Adder(int a, int b) : _a(a), _b(b) {}

int Adder::result() {
  return _a + _b;
}
