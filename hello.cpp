#include <iostream>
#include "myclass.h"

using namespace std;

int main () {
  cout << "Hello there!" << endl;

  MyClass a(5);
  cout << a.getX() << endl;
}
