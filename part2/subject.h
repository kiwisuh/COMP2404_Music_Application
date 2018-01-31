
#ifndef SUBJECT_H
#define SUBJECT_H
#include <iostream>
#include <string>
#include <string.h>
#include <set>
#include "observer.h"
using namespace std;

class Subject {
 set<Observer*> observers;
public:
  void attach(Observer & obs);
  void dettach(Observer & obs);
protected:
  void notify();

};

#endif
