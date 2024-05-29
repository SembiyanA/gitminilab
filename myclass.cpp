#include "myclass.h"

MyClass::MyClass() {
}

MyClass::MyClass(int x_) { 
  //Constructor
  x = x_; 
}

int MyClass::getX() { 
  return x; 
}
