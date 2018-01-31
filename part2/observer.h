
#ifndef OBSERVER_H
#define OBSERVER_H
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Subject;
class Observer {
  public:
  virtual void update(Subject * subject) = 0;

  //virtual void printOn(ostream & out) const = 0;

  int operator==(const Observer & obs) const {
    return this == & obs;
  }
};
#endif
